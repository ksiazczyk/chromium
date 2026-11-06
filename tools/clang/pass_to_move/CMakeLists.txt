# ---docerion
# type: config
# title: CMake build file for the pass_to_move tool
# summary: CMake build definition that compiles PassToMove.cpp into the pass_to_move executable and links it against LLVM and clang libraries.
# ---

set(LLVM_LINK_COMPONENTS
  BitReader
  MCParser
  Option
  X86AsmParser
  X86CodeGen
  )

add_llvm_executable(pass_to_move
  PassToMove.cpp
  )

target_link_libraries(pass_to_move
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

cr_install(TARGETS pass_to_move RUNTIME DESTINATION bin)
