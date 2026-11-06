// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected output for ignored path filter test
// summary: Expected result confirming no rewrite occurs because the file is listed in paths-to-ignore.txt, leaving the std::vector<SomeClass*> field unchanged.
// ---

#include <vector>

class SomeClass;

struct MyStruct {
  // No rewrite expected - this whole source file is mentioned in the
  // tests/paths-to-ignore.txt file.
  std::vector<SomeClass*> ptr_field_;
};
