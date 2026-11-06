// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Multiple errors for same iterator source test
// summary: C++ test case checking that the iterator checker reports multiple errors for the same iterator source in a vector-of-vectors comparison.
// ---

#include <algorithm>
#include <vector>

void SameSourceError(const std::vector<std::vector<int>>& vector_of_vector,
                     const std::vector<int>& v) {
  auto it = std::begin(vector_of_vector);

  if (it->begin() == v.begin()) {
    return;
  }
}
