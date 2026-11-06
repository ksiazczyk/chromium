# ---docerion
# type: config
# title: CMake build configuration for v8_handle_migrate
# summary: CMake build file that defines the v8_handle_migrate clang tool executable and links the LLVM and Clang libraries it needs.
# ---

set(LLVM_LINK_COMPONENTS
  Support
  )

add_llvm_executable(v8_handle_migrate
  HandleMigrate.cpp
  )

target_link_libraries(v8_handle_migrate
  clangAST
  clangASTMatchers
  clangBasic
  clangFrontend
  clangSerialization
  clangTooling
)

cr_install(TARGETS v8_handle_migrate RUNTIME DESTINATION bin)
