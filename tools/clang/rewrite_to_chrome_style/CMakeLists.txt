# ---docerion
# type: config
# title: CMake build definition for rewrite_to_chrome_style
# summary: Builds the rewrite_to_chrome_style clang tool and links it against the required LLVM and clang libraries.
# ---

set(LLVM_LINK_COMPONENTS
  BitReader
  MCParser
  Option
  X86AsmParser
  X86CodeGen
  )

add_llvm_executable(rewrite_to_chrome_style
  EditTracker.cpp
  RewriteToChromeStyle.cpp
  )

target_link_libraries(rewrite_to_chrome_style
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

cr_install(TARGETS rewrite_to_chrome_style RUNTIME DESTINATION bin)
