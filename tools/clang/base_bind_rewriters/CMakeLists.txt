# ---docerion
# type: config
# title: CMake build for the base_bind_rewriters tool
# summary: CMake build file that defines the base_bind_rewriters executable and links it against the required LLVM and Clang libraries.
# ---

set(LLVM_LINK_COMPONENTS
  BitReader
  MCParser
  Option
  Support
  X86AsmParser
  X86CodeGen
  X86Desc
  X86Info
  )

add_llvm_executable(base_bind_rewriters
  BaseBindRewriters.cpp
  )

target_link_libraries(base_bind_rewriters
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
  clangToolingCore
  )

cr_install(TARGETS base_bind_rewriters RUNTIME DESTINATION bin)
