// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Input for ignored path filter test
// summary: Original C++ input with a std::vector<SomeClass*> field used to verify that files listed in paths-to-ignore.txt are not rewritten.
// ---

#include <vector>

class SomeClass;

struct MyStruct {
  // No rewrite expected - this whole source file is mentioned in the
  // tests/paths-to-ignore.txt file.
  std::vector<SomeClass*> ptr_field_;
};
