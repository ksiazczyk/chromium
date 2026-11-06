# ---docerion
# type: config
# title: CMake build file for the trace_annotator tool
# summary: Defines the trace_annotator executable build and links it against the required LLVM and Clang libraries for installation.
# ---

set(LLVM_LINK_COMPONENTS
  BitReader
  MCParser
  Option
  )

add_llvm_executable(trace_annotator
  TraceAnnotator.cpp
  )

target_link_libraries(trace_annotator
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

cr_install(TARGETS trace_annotator RUNTIME DESTINATION bin)
