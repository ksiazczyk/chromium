// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: std_vector_pop_back.cpp
// summary: Test case verifying that std::vector::pop_back invalidates iterators, producing a potentially invalid iterator use error.
// ---

#include <vector>

void StdVectorPopBackInvalid(std::vector<int>& v) {
  auto it = v.begin();
  if (it == v.end()) {
    return;
  }

  *it;  // Valid because `it != v.end()` checked above.
  v.pop_back();
  *it;  // Invalid, because `pop_back` invalidated every references.
}
