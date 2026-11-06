# ---docerion
# type: config
# title: CMake build for rewrite_autofill_form_data tool
# summary: CMake build file that compiles the rewrite_autofill_form_data clang tool and links it against LLVM and clang libraries.
# ---

set(LLVM_LINK_COMPONENTS
  BitReader
  MCParser
  Option
  X86AsmParser
  X86CodeGen
  )

add_llvm_executable(rewrite_autofill_form_data
  FieldToFunction.cpp
  )

target_link_libraries(rewrite_autofill_form_data
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

cr_install(TARGETS rewrite_autofill_form_data RUNTIME DESTINATION bin)
