// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RunLoop Rust shim header
// summary: Declares functions to create, run, quit, and run-until-idle a base RunLoop on the heap so it can be passed across the Rust cxx bridge.
// ---

#ifndef BASE_RUN_LOOP_RUST_SHIM_H_
#define BASE_RUN_LOOP_RUST_SHIM_H_

#include "base/run_loop.h"

namespace base {

// Create a new RunLoop on the heap so we can pass it over the cxx bridge
std::unique_ptr<RunLoop> CreateRunLoop();

// Run the run loop.
void RunRunLoop(const std::unique_ptr<RunLoop>& run_loop);

// Quit the run loop.
void QuitRunLoop(const std::unique_ptr<RunLoop>& run_loop);

// Run until the loop is idle.
void RunUntilIdle(const std::unique_ptr<RunLoop>& run_loop);

}  // namespace base

#endif  // BASE_RUN_LOOP_RUST_SHIM_H_
