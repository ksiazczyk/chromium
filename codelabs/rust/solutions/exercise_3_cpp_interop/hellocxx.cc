// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: C++ main program calling into Rust
// summary: C++ executable entry point that initializes the command line, prints a greeting, and calls the Rust function hello_from_rust via the generated bridge header.
// ---

#include <stdio.h>

#include <string>

#include "base/check.h"
#include "base/command_line.h"
#include "codelabs/rust/solutions/exercise_3_cpp_interop/hellocxxlib.rs.h"

int main(int argc, char* argv[]) {
  CHECK(base::CommandLine::Init(argc, argv));
  printf("Hello from C++!\n");
  hello_from_rust();
}
