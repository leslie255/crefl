#pragma once

#include <clang-c/Index.h>
#include <tuple>
#include <utility>

template <typename... Ts>
using TypedCursorVisitor = CXChildVisitResult (*)(CXCursor cursor, CXCursor parent, Ts*... state);

template <typename... Ts, size_t... Is>
CXChildVisitResult invoke_visitor(
    CXCursor cursor,
    CXCursor parent,
    void* data,
    std::index_sequence<Is...>) {
    using TupleType = std::tuple<TypedCursorVisitor<Ts...>, Ts*...>;
    auto* values = static_cast<TupleType*>(data);
    auto visitor = std::get<0>(*values);
    return visitor(cursor, parent, std::get<Is + 1>(*values)...);
}

template <typename... Ts>
void visit_children(CXCursor cursor, TypedCursorVisitor<Ts...> visitor_func, Ts*... xs) {
    using TupleType = std::tuple<TypedCursorVisitor<Ts...>, Ts*...>;
    TupleType values = std::make_tuple(visitor_func, xs...);
    clang_visitChildren(
        cursor,
        [](CXCursor cursor, CXCursor parent, CXClientData client_data) {
            return invoke_visitor<Ts...>(
                cursor,
                parent,
                client_data,
                std::index_sequence_for<Ts...> {});
        },
        &values);
}


