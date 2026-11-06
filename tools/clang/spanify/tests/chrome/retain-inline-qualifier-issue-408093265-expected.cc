// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: retain-inline-qualifier-issue-408093265 expected test output
// summary: Expected spanify output verifying the inline qualifier is retained when rewriting kArray, tracking issue 408093265.
// ---

#include <array>

int UnsafeIndex();

// Expected rewrite:
// inline constexpr auto kArray = std::to_array<int>({0, 1, 2, 3, 4});
inline constexpr auto kArray = std::to_array<int>({0, 1, 2, 3, 4});

int UnsafeFunction() {
  return kArray[UnsafeIndex()];
}
