// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This test is informational and documents a pattern not handled by
// `spanify` which is thankfully rarely used in Chromium.

// ---docerion
// type: test
// title: Informational array alias not rewritten test input
// summary: Original test input documenting an array alias pattern spanify does not handle, explaining why converting it to std::array would break pass-by-pointer semantics.
// ---

// A well-meaning human author could rewrite this to a `std::array`...
using EightIntegers = int[8];

unsigned UnsafeIndex();

// (continued) ...and then this function would continue to compile
// happily, but would now be broken.
//
// As a C-style array, `klaus` would decay into a pointer. This has
// pass-by-reference (by-pointer) semantics.
// As a `std::array`, `klaus` is passed _by value_, and this function
// becomes meaningless.
//
// A motivating example exists (existed) in `box_reader.h`, where an
// alias akin to `EightIntegers` was set up [1] and used to pass an
// array (decayed into a pointer) [2], surprisingly breaking unit
// tests.
//
// [1]
// https://source.chromium.org/chromium/chromium/src/+/main:media/formats/mp4/box_reader.h;l=36;drc=e1cad868d343b4300d0ea75193190b3b24a94f07
// [2]
// https://source.chromium.org/chromium/chromium/src/+/main:media/formats/mp4/box_reader.h;l=158;drc=e1cad868d343b4300d0ea75193190b3b24a94f07
void MutateIntegers(EightIntegers klaus) {
  klaus[UnsafeIndex()] = 0;
}

// No rewrite expected (?).
void WouldButDoesntInduceArrayification() {
  EightIntegers klaus;
  MutateIntegers(klaus);
}
