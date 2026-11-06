// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Arithmetic fields test - original input
// summary: Input for the arithmetic-fields test with raw int pointer fields, one of which is expected to allow pointer arithmetic.
// ---

namespace my_namespace {

struct MyStruct {
  int* ptr_arithmetic;
  int* ptr_no_arithmetic;
};

}  // namespace my_namespace
