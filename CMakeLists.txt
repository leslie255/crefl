cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(crefl VERSION 0.0.0 LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(NOT DEFINED OPT_LEVEL)
    set(OPT_LEVEL 2)
endif()

set(SOURCES
    sources/main.cxx
)
add_executable(${PROJECT_NAME} ${SOURCES})

target_compile_options(${PROJECT_NAME} PRIVATE
    "-Wall"
    "-Wextra"
    "-Wconversion"
)

find_package(Clang CONFIG REQUIRED)

target_include_directories(${PROJECT_NAME} PRIVATE ${CLANG_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE libclang)
