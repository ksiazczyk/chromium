// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Path filter test - expected output
// summary: Expected output confirming no rewrites occur because the whole file is listed in paths-to-ignore.txt.
// ---

#include "base/containers/span.h"

class SomeClass;

struct MyStruct {
  // No rewrite expected - this whole source file is mentioned in the
  // tests/paths-to-ignore.txt file.
  SomeClass* ptr_field_;
  SomeClass& ref_field_;
  base::span<SomeClass> span_field_;
};
