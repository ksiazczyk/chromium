// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Arithmetic fields test - expected output
// summary: Expected result showing the pointer-arithmetic field rewritten to raw_ptr<int, AllowPtrArithmetic> while the other field becomes a plain raw_ptr.
// ---

#include "base/memory/raw_ptr.h"

namespace my_namespace {

struct MyStruct {
  raw_ptr<int, AllowPtrArithmetic> ptr_arithmetic;
  raw_ptr<int> ptr_no_arithmetic;
};

}  // namespace my_namespace
