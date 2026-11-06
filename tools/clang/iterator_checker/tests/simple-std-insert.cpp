// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Iterator validity after vector insert
// summary: Test case checking that iterators reassigned after vector insert are accepted while stale iterators are flagged as potentially invalid.
// ---

#include <algorithm>
#include <vector>

void IteratorValidAfterInsert(std::vector<int>& v) {
  auto it = std::begin(v);

  v.insert(it, 0);

  it = std::begin(v);

  if (it != std::end(v)) {
    // Fine because it was reassigned after `insert` and checked against `end`.
    *it;
  }
}

void IteratorInvalidAfterInsert(std::vector<int>& v, int value) {
  auto it = std::begin(v);

  v.insert(it, 0);

  // Invalid because insert might have invalidated this iterator.
  *it;
}
