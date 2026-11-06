# ---docerion
# type: config
# title: CMake build config for the rewrite_autofill_personal_data_manager tool
# summary: Defines the LLVM and Clang library dependencies and install rule for building the rewrite_autofill_personal_data_manager executable.
# ---

set(LLVM_LINK_COMPONENTS
  BitReader
  MCParser
  Option
  X86AsmParser
  X86CodeGen
  )

add_llvm_executable(rewrite_autofill_personal_data_manager
  ForwardCalls.cpp
  )

target_link_libraries(rewrite_autofill_personal_data_manager
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

cr_install(TARGETS rewrite_autofill_personal_data_manager RUNTIME DESTINATION bin)
