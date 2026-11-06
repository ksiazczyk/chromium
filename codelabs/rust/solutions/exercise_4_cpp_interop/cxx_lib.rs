// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Rust cxx bridge for Rust and C++ interop
// summary: Defines the cxx FFI bridge exposing hello_from_rust to C++ and calling hello_from_cpp from Rust, plus the Rust greeting function.
// ---

#[cxx::bridge]
mod ffi {
    extern "Rust" {
        fn hello_from_rust();
    }

    unsafe extern "C++" {
        include!("codelabs/rust/solutions/exercise_4_cpp_interop/callbacks_from_rust.h");
        fn hello_from_cpp();
    }
}

pub fn hello_from_rust() {
    println!("Hello from Rust!");
    ffi::hello_from_cpp();
}
