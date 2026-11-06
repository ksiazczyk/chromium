// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Copy constructor iterator validity test
// summary: Test case verifying that the iterator checker flags dereferences of copied iterators that were not checked against end, while checked originals stay valid.
// ---

#include <algorithm>
#include <vector>

void CopyConstructorTest(std::vector<int>& v) {
  auto it = std::begin(v);
  auto copy_it = it;

  // Both invalid because they were not checked against `end`.
  *it;
  *copy_it;

  if (it == std::end(v)) {
    return;
  }

  // Valid because it was checked against `end`.
  *it;

  // Invalid because it was not checked against `end`.
  *copy_it;
}
