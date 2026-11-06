# ---docerion
# type: config
# title: CMake build configuration for string_piece_rewriters
# summary: Defines the LLVM/Clang executable target, linked libraries, and install rule for the string_piece_rewriters tool.
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

add_llvm_executable(string_piece_rewriters
  StringPieceRewriters.cpp
  )

target_link_libraries(string_piece_rewriters
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
  clangTransformer
  )

cr_install(TARGETS string_piece_rewriters RUNTIME DESTINATION bin)
