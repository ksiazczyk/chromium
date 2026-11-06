# ---docerion
# type: config
# title: Build configuration for the empty_string Clang tool
# summary: CMake build definition that compiles the empty_string Clang tool and links it against the required LLVM and Clang libraries.
# ---

set(LLVM_LINK_COMPONENTS
  BitReader
  MCParser
  Option
  )

add_llvm_executable(empty_string
  EmptyStringConverter.cpp
  )

target_link_libraries(empty_string
  clangAST
  clangASTMatchers
  clangAnalysis
  clangBasic
  clangDriver
  clangEdit
  clangFrontend
  clangLex
  clangParse
  clangSema
  clangSerialization
  clangTooling
  )

cr_install(TARGETS empty_string RUNTIME DESTINATION bin)
