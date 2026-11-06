// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify test input for retaining inline qualifier
// summary: Original C++ source verifying that the spanify tool keeps the inline qualifier when rewriting a constexpr array, referencing issue 408093265.
// ---

int UnsafeIndex();

// Expected rewrite:
// inline constexpr auto kArray = std::to_array<int>({0, 1, 2, 3, 4});
inline constexpr int kArray[] = {0, 1, 2, 3, 4};

int UnsafeFunction() {
  return kArray[UnsafeIndex()];
}
