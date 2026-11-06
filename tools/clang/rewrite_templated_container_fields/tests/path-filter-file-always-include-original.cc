// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Input for always-include path filter test
// summary: Original C++ input with a std::vector<SomeClass*> field used to test force-inclusion of a file marked with '!' in paths-to-ignore.txt.
// ---

#include <vector>

class SomeClass;

struct MyStruct {
  // Rewrite expected - this file is force included in the rewrite using ! in
  // tests/paths-to-ignore.txt file.
  std::vector<SomeClass*> ptr_field_;
};
