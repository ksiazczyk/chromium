// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected output for always-include path filter test
// summary: Expected result showing the file is force-included via a '!' entry in paths-to-ignore.txt, so its vector field is rewritten to raw_ptr.
// ---

#include <vector>

#include "base/memory/raw_ptr.h"

class SomeClass;

struct MyStruct {
  // Rewrite expected - this file is force included in the rewrite using ! in
  // tests/paths-to-ignore.txt file.
  std::vector<raw_ptr<SomeClass>> ptr_field_;
};
