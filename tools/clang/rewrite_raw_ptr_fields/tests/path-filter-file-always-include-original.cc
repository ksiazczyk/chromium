// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Path filter always-include test - original input
// summary: Original source for the force-included path filter test, with fields expected to be rewritten despite path filtering.
// ---

#include "base/containers/span.h"

class SomeClass;

struct MyStruct {
  // Rewrite expected - this file is force included in the rewrite using ! in
  // tests/paths-to-ignore.txt file.
  SomeClass* ptr_field_;
  SomeClass& ref_field_;
  base::span<SomeClass> span_field_;
};
