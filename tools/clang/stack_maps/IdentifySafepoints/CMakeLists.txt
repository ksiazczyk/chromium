# ---docerion
# type: config
# title: CMake build for the IdentifySafepoints LLVM pass
# summary: Defines the LLVMIdentifySafepointsPass module build from IdentifySafepoints.cpp with RTTI disabled.
# ---

add_library(LLVMIdentifySafepointsPass MODULE IdentifySafepoints.cpp)
target_compile_options(LLVMIdentifySafepointsPass PUBLIC -fno-rtti)
