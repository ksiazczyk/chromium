// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Rust bridge for creating a task environment
// summary: CXX bridge exposing a Rust API that creates a SingleThreadTaskEnvironment for testing via the C++ shim.
// ---

#[cxx::bridge(namespace = "base::test")]
pub mod ffi {
    unsafe extern "C++" {
        include!("base/test/task_environment_rust_shim.h");

        #[namespace = "base::test"]
        type SingleThreadTaskEnvironment;

        fn CreateTaskEnvironment() -> UniquePtr<SingleThreadTaskEnvironment>;
    }
}
