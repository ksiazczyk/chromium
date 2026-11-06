// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Rust gtest unit tests for add_numbers
// summary: Contains a rust_gtest_interop-based unit test verifying that add_numbers(2, 2) returns 4.
// ---

use rust_gtest_interop::prelude::*;

chromium::import! {
    "//codelabs/rust/solutions/exercise_2_testing:library";
}

#[gtest(MyRustTestSuite, MyAdditionTest)]
fn test() {
    expect_eq!(library::add_numbers(2, 2), 4);
}
