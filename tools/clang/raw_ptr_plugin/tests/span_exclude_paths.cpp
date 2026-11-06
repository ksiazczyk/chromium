// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Span exclude paths test source
// summary: C++ test case verifying that the raw-ptr-exclude-path argument suppresses span field errors for matching paths.
// ---

#include "base/containers/span.h"

class SomeClass {};

class MyClass {
 public:
  // No error expected because of span-exclude-path arg.
  base::span<SomeClass> span_field1;
};
