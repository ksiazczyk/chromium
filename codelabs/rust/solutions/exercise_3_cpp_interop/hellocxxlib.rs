// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Rust cxx bridge exposing hello_from_rust
// summary: Rust source defining a cxx::bridge FFI module and the hello_from_rust function that prints a greeting for the C++ interop exercise.
// ---

#[cxx::bridge]
mod ffi {
    extern "Rust" {
        fn hello_from_rust();
    }
}

pub fn hello_from_rust() {
    println!("Hello from Rust!")
}
