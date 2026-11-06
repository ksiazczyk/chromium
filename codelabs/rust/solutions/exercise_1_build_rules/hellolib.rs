// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Rust library exporting a C function
// summary: Rust crate root that exposes hello_from_rust as a no-mangle extern C function printing a Rust greeting for the C++ executable to call.
// ---

#[unsafe(no_mangle)]
pub extern "C" fn hello_from_rust() {
    println!("Hello from Rust!")
}
