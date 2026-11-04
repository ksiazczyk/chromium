// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: C++ shim creating a task environment for Rust
// summary: Implements CreateTaskEnvironment, returning a SingleThreadTaskEnvironment instance for the Rust test bridge.
// ---

#include "base/test/task_environment_rust_shim.h"

namespace base::test {

std::unique_ptr<SingleThreadTaskEnvironment> CreateTaskEnvironment() {
  return std::make_unique<SingleThreadTaskEnvironment>();
}

}  // namespace base::test
