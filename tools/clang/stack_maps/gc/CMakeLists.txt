# ---docerion
# type: config
# title: CMake build definition for the stack map GC library
# summary: Builds the GC library from the GC API, stack map parser and x86-64 shim sources, keeping frame pointers enabled.
# ---

cmake_minimum_required(VERSION 3.13)
enable_language(ASM)

SET(CMAKE_C_COMPILER ../../../../third_party/llvm-build/Release+Asserts/bin/clang)
SET(CMAKE_CXX_COMPILER ../../../../../third_party/llvm-build/Release+Asserts/bin/clang)
SET(CMAKE_BUILD_TYPE Debug)

add_library(GC gc_api.h gc_api.cc stack_map_parser.h stack_map_parser.cc
    GC_Shim_x86_64.S)
target_compile_options(GC PUBLIC -fno-omit-frame-pointer)
target_include_directories(GC PUBLIC "../")
