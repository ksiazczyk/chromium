// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: C++ shim for Rust RunLoop bindings
// summary: Provides C++ shim functions to create, run, quit, and run-until-idle a RunLoop from the Rust cxx bridge.
// ---

#include "base/run_loop_rust_shim.h"

namespace base {

std::unique_ptr<RunLoop> CreateRunLoop() {
  return std::make_unique<RunLoop>();
}

void RunRunLoop(const std::unique_ptr<RunLoop>& run_loop) {
  run_loop->Run();
}

void QuitRunLoop(const std::unique_ptr<RunLoop>& run_loop) {
  run_loop->Quit();
}

void RunUntilIdle(const std::unique_ptr<RunLoop>& run_loop) {
  run_loop->RunUntilIdle();
}

}  // namespace base
