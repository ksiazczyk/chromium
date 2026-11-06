// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: C++ main program calling into Rust
// summary: Executable entry point that initializes the command line, prints a greeting from C++, and calls hello_from_rust via the cxx bridge.
// ---

#include <stdio.h>

#include <string>

#include "base/check.h"
#include "base/command_line.h"
#include "codelabs/rust/solutions/exercise_4_cpp_interop/cxx_lib.rs.h"

int main(int argc, char* argv[]) {
  CHECK(base::CommandLine::Init(argc, argv));
  printf("Hello from C++!\n");
  hello_from_rust();
}
