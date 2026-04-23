#include <cassert>
#include <cstdint>
#include <filesystem>
#include <map>

#include <clang-c/Index.h>
#include <unordered_set>

#include "defines.hxx"
#include "libclang_visitor_tools.hxx"
#include "print.hxx"

struct ProgramArgs {
    std::string input_path;
    std::string prolog_hpp = {};
    std::string epilog_hpp = {};
    std::string prolog_cpp = {};
    std::string epilog_cpp = {};
    std::optional<std::string> output_header = std::nullopt;
    std::optional<std::string> output_source = std::nullopt;
    std::optional<std::string> namespace_ = std::nullopt;
};

struct EnumConstant {
    std::string name;
    int64_t value;
};

struct Enum {
    CXType enum_type;
    std::string enum_tag;
    std::optional<std::string> typedef_name = std::nullopt;
    std::vector<EnumConstant> constants;

    std::string_view canonical_name() const {
        if (typedef_name.has_value())
            return typedef_name.value();
        return enum_tag;
    }
};

struct ProgramState {
    const ProgramArgs* nonnull program_args;
    std::map<std::string, Enum, std::greater<std::string>> enums = {};

    void append_enum(Enum enum_) {
        assert(enum_.enum_type.kind == CXType_Enum);
        enums[enum_.enum_tag] = enum_;
    }

    void set_enum_typedef_name(const std::string& enum_tag, std::string typedef_name) {
        enums[enum_tag].typedef_name = typedef_name;
    }
};

void encountered_enum_decl(CXCursor cursor, ProgramState* nonnull state) {
    assert(clang_getCursorKind(cursor) == CXCursor_EnumDecl);
    if (clang_Cursor_isAnonymous(cursor))
        return;

    CXType type = clang_getCursorType(cursor);
    CXString enum_tag = clang_getCursorSpelling(cursor);

    CXCursor enum_decl_cursor = clang_getTypeDeclaration(type);
    auto constants = std::vector<EnumConstant> {};
    visit_children(
        enum_decl_cursor,
        +[](CXCursor cursor, CXCursor parent, std::vector<EnumConstant>* nonnull constants) {
            (void)parent;
            if (clang_getCursorKind(cursor) != CXCursor_EnumConstantDecl)
                return CXChildVisit_Continue;
            int64_t constant_value = clang_getEnumConstantDeclValue(cursor);
            CXString constant_name = clang_getCursorSpelling(cursor);
            constants->push_back(
                EnumConstant {
                    .name = std::string(clang_getCString(constant_name)),
                    .value = constant_value});
            clang_disposeString(constant_name);
            return CXChildVisit_Continue;
        },
        &constants);

    state->append_enum(
        Enum {
            .enum_type = type,
            .enum_tag = std::string(clang_getCString(enum_tag)),
            .constants = constants});

    clang_disposeString(enum_tag);
}

void encountered_typedef_decl(CXCursor cursor, ProgramState* nonnull state) {
    assert(clang_getCursorKind(cursor) == CXCursor_TypedefDecl);

    bool is_enum_decl = false;
    visit_children(
        cursor,
        +[](CXCursor cursor, CXCursor parent, bool* nonnull is_enum_decl) {
            (void)parent;
            if (clang_getCursorKind(cursor) == CXCursor_EnumDecl)
                *is_enum_decl = true;
            return CXChildVisit_Continue;
        },
        &is_enum_decl);

    if (is_enum_decl) {
        CXType typedef_type = clang_getCursorType(cursor);
        CXType enum_type = clang_getTypedefDeclUnderlyingType(cursor);
        CXString typedef_name = clang_getTypeSpelling(typedef_type);
        CXString enum_tag = clang_getCursorSpelling(clang_getTypeDeclaration(enum_type));
        state->set_enum_typedef_name(
            std::string(clang_getCString(enum_tag)),
            std::string(clang_getCString(typedef_name)));
        clang_disposeString(enum_tag);
        clang_disposeString(typedef_name);
    }
}

CXChildVisitResult visit_root(CXCursor cursor, CXCursor parent, ProgramState* nonnull state) {
    (void)parent;

    switch (clang_getCursorKind(cursor)) {
    case CXCursor_EnumDecl: encountered_enum_decl(cursor, state); break;
    case CXCursor_TypedefDecl: encountered_typedef_decl(cursor, state); break;
    default: break;
    };

    return CXChildVisit_Continue;
}

void scan_file(ProgramState& state) {
    CXIndex index = clang_createIndex(0, 0);
    CXTranslationUnit unit = clang_parseTranslationUnit(
        index,
        state.program_args->input_path.c_str(),
        nullptr,
        0,
        nullptr,
        0,
        CXTranslationUnit_None);
    if (unit == nullptr) {
        eprintln("Unable to parse file at {}.", state.program_args->input_path);
        exit(1);
    }
    CXCursor root_cursor = clang_getTranslationUnitCursor(unit);

    visit_children(root_cursor, visit_root, &state);

    // for (const auto& [_, enum_] : state.enums) {
    //     if (enum_.typedef_name.has_value())
    //         print("typedef ");
    //     println("enum {} {{", enum_.enum_tag);
    //     for (const auto& constant : enum_.constants) {
    //         println("\t{} = {}", constant.name, constant.value);
    //     }
    //     if (enum_.typedef_name.has_value())
    //         println("}} {};", enum_.typedef_name.value());
    //     else
    //         println("}};");
    // }
}

// clang-format off
static const std::string_view HEADER_INCLUDES_PROLOG =
"#include <cstddef>\n"
"#include <cstdint>\n"
"#include <cstring>\n"
"\n"
;

static const std::string_view HEADER_MAIN_PROLOG =
"/// Nullable!\n"
"/// If `ptr` is null, then `size` must be 0.\n"
"struct string_view_t {\n"
"    const char* _Nullable ptr;\n"
"    size_t size;\n"
"};\n"
"\n"
"[[gnu::always_inline]]\n"
"static inline bool operator==(string_view_t lhs, string_view_t rhs) {\n"
"    if (lhs.size != rhs.size) return false;\n"
"    if (lhs.size == 0 && rhs.size == 0) return true;\n"
"    return memcmp(lhs.ptr, rhs.ptr, lhs.size) == 0;\n"
"}\n"
"\n"
"[[gnu::always_inline]]\n"
"static inline constexpr string_view_t sv(nullptr_t) {\n"
"    return string_view_t {.ptr = nullptr, .size = 0};\n"
"}\n"
"\n"
"[[gnu::always_inline]]\n"
"static inline string_view_t sv(const char* cstr) {\n"
"    return string_view_t {.ptr = cstr, .size = strlen(cstr)};\n"
"}\n"
"\n"
"/// If no enum of type `typename_` is known, returns a `string_view_t` with `.ptr = nullptr`\n"
"///\n"
"/// In C, an enum could have two \"names\": the `typedef ... name` name and `enum tag` tag. Thus requiring clarification on what `typename_` actually refers to.\n"
"/// `typename_` is selected by the below logic:\n"
"///\n"
"/// - if an enum declaration has a typedef name, use that\n"
"/// - if an enum has only enum tag, uses that\n"
"/// - if an enum has no names, no reflection code would be generated for that enum\n"
"///\n"
"/// Reflection codegen would fail if two (or more) enums exists in one file that, by the above logic, would result in the same `typename_`. For example:\n"
"///\n"
"/// ```cxx\n"
"/// typedef enum\n"
"/// ```\n"
"///\n"
"string_view_t enum_name(string_view_t typename_, int64_t value);\n"
"\n"
;

static const std::string_view HEADER_EPILOG = "\n";

static const std::string_view HELP_TEXT =
"Usage: crefle [options] <input_path>\n"
"Options:\n"
"\t-h,--help    : Print this prompt\n"
"\t--hpp        : Header file (.hpp/.hxx) output path\n"
"\t--cpp        : Source file (.cpp/.cxx) output path (requires `--hpp` to be present)\n"
"\t--namespace  : Namespace of generated reflection code (leave empty for no namespace)\n"
"\t--prolog-hpp : Text to append before everything else in the generated header file\n"
"\t--epilog-hpp : Text to append after everything else in the generated header file\n"
"\t--prolog-cpp : Text to append before everything else in the generated source file\n"
"\t--epilog-cpp : Text to append after everything else in the generated source file\n"
;
// clang-format on

template <FormattableType... Args>
static inline void fail(std::format_string<Args...> fmt, Args&&... xs) {
    eprintln("Error: {}", std::format(fmt, std::forward<Args>(xs)...));
    eprintln("{}", HELP_TEXT);
    std::exit(1);
}

ProgramArgs parse_argv(int32_t argc_, const char** argv) {
    ProgramArgs args;
    bool input_set = false;

    for (int32_t i = 1; i < argc_; ++i) {
        std::string_view arg = argv[i];

        auto require_value = [&](std::string_view opt) -> std::string_view {
            if (i + 1 >= argc_) {
                fail("Missing value for {}", opt);
            }
            return argv[++i];
        };

        if (arg == "--help" || arg == "-h") {
            eprintln("{}", HELP_TEXT);
            std::exit(0);
        }
        // clang-format off
        if (arg == "--hpp")             args.output_header = std::string(require_value(arg));
        else if (arg == "--cpp")        args.output_source = std::string(require_value(arg));
        else if (arg == "--namespace")  args.namespace_ = std::string(require_value(arg));
        else if (arg == "--prolog-hpp") args.prolog_hpp = std::string(require_value(arg));
        else if (arg == "--epilog-hpp") args.epilog_hpp = std::string(require_value(arg));
        else if (arg == "--prolog-cpp") args.prolog_cpp = std::string(require_value(arg));
        else if (arg == "--epilog-cpp") args.epilog_cpp = std::string(require_value(arg));
        // clang-format on
        else if (!arg.starts_with("--")) {
            if (input_set) {
                fail("Multiple input paths provided (only one allowed)");
            }
            args.input_path = arg;
            input_set = true;
        } else {
            fail("Unknown option: {}", std::string(arg));
        }
    }

    if (!args.output_header.has_value() && args.output_source.has_value()) {
        fail(
            "`--output-source` argument requires `--output-header`, but the latter is not present");
    }
    if (!args.output_header.has_value() && !args.output_source.has_value()) {
        eprintln(
            "[warning] no header output or source output paths provided, crefle would not output "
            "anything");
    }

    if (!input_set) {
        fail("Missing input path");
    }

    return args;
}

void generate_hpp(const ProgramState& state) {
    if (!state.program_args->output_header.has_value())
        return;
    auto out_path = state.program_args->output_header.value();
    auto out = std::ofstream(out_path, std::ios::out | std::ios::trunc);

    println_to(out, "{}", state.program_args->prolog_hpp);
    print_to(out, "{}", HEADER_INCLUDES_PROLOG);

    if (state.program_args->namespace_.has_value())
        println_to(out, "namespace {} {{\n", state.program_args->namespace_.value());

    print_to(out, "{}", HEADER_MAIN_PROLOG);

    for (const auto& [_, enum_] : state.enums) {
        println_to(out, "string_view_t enum_name_{}(int64_t value);", enum_.canonical_name());
    }

    print_to(out, "{}", HEADER_EPILOG);

    if (state.program_args->namespace_.has_value())
        println_to(out, "}} // namespace {}\n", state.program_args->namespace_.value());

    println_to(out, "{}", state.program_args->epilog_hpp);
}

std::string relative_subpath(std::string_view path0, std::string_view path1) {
    namespace fs = std::filesystem;
    fs::path from = fs::path(path0).parent_path();
    fs::path to = path1;
    fs::path relative = fs::proximate(to, from);
    return relative;
}

void generate_cpp(const ProgramState& state) {
    if (!state.program_args->output_header.has_value())
        return;
    auto out_path = state.program_args->output_source.value();
    auto out = std::ofstream(out_path, std::ios::out | std::ios::trunc);

    println_to(out, "{}", state.program_args->prolog_cpp);
    println_to(
        out,
        "#include \"{}\"\n",
        relative_subpath(
            state.program_args->output_source.value(),
            state.program_args->output_header.value()));

    if (state.program_args->namespace_.has_value())
        println_to(out, "namespace {} {{\n", state.program_args->namespace_.value());

    println_to(out, "string_view_t enum_name(string_view_t typename_, int64_t value) {{");
    size_t counter = 0;
    for (const auto& [_, enum_] : state.enums) {
        if (counter != 0)
            print_to(out, "    else ");
        else
            print_to(out, "    ");
        println_to(out, "if (typename_ == sv(\"{0}\")) return enum_name_{0}(value);", enum_.canonical_name());
        ++counter;
    }
    if (counter != 0) {
        println_to(out, "    else return sv(nullptr);");
    }
    println_to(out, "}}\n");

    auto existing_values = std::unordered_set<int64_t> {};
    for (const auto& [_, enum_] : state.enums) {
        println_to(out, "string_view_t enum_name_{}(int64_t value) {{", enum_.canonical_name());
        println_to(out, "    switch (value) {{");

        for (const auto& constant : enum_.constants) {
            auto [_, unique] = existing_values.insert(constant.value);
            if (unique) {
                println_to(out, "    case {}: return sv(\"{}\");", constant.value, constant.name);
            } else {
                println_to(
                    out,
                    "    // case {}: return sv(\"{}\"); // duplicate value",
                    constant.value,
                    constant.name);
            }
        }
        existing_values.clear();

        println_to(out, "    default: return sv(nullptr);");
        println_to(out, "    }};");
        println_to(out, "}}\n");
    }

    if (state.program_args->namespace_.has_value())
        println_to(out, "}} // namespace {}\n", state.program_args->namespace_.value());

    println_to(out, "{}", state.program_args->epilog_cpp);
}

int32_t main(int32_t argc, const char** argv) {
    auto program_args = parse_argv(argc, argv);
    auto state = ProgramState {.program_args = &program_args};
    scan_file(state);

    generate_hpp(state);
    generate_cpp(state);

    return 0;
}
