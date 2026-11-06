# ---docerion
# type: config
# title: CMake build file for the translation_unit tool
# summary: Defines the LLVM executable build for translation_unit and links it against the required Clang libraries for installation.
# ---

set(LLVM_LINK_COMPONENTS
  BitReader
  MCParser
  Option
  )

add_llvm_executable(translation_unit
  TranslationUnitGenerator.cpp
  )

target_link_libraries(translation_unit
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

cr_install(TARGETS translation_unit RUNTIME DESTINATION bin)
