// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Rust library with add_numbers function
// summary: Implements a Rust add_numbers function that returns the sum of two i32 values.
// ---

#[unsafe(no_mangle)]
pub fn add_numbers(a: i32, b: i32) -> i32 {
    a + b
}
