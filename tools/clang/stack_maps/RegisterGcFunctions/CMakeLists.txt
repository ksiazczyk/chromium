# ---docerion
# type: source
# title: CMake build definition for the RegisterGcFunctions pass
# summary: Defines the LLVMRegisterGcFunctionsPass module target from RegisterGcFunctions.cpp and compiles it with RTTI disabled.
# ---

add_library(LLVMRegisterGcFunctionsPass MODULE RegisterGcFunctions.cpp)
target_compile_options(LLVMRegisterGcFunctionsPass PUBLIC -fno-rtti)
