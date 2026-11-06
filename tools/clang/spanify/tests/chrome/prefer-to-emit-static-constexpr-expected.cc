// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify expected output preferring static constexpr qualifier order
// summary: Expected spanify rewrite showing a constexpr array converted with std::to_array while keeping the preferred static constexpr qualifier order.
// ---

#include <array>

int UnsafeIndex();

int UnsafeBufferUsage() {
  // We prefer to emit `static constexpr` rather than
  // `constexpr static`.
  //
  // Expected rewrite:
  // static constexpr auto kArray = std::to_array<int>({0, 1, 2, 3, 4});
  static constexpr auto kArray = std::to_array<int>({0, 1, 2, 3, 4});
  return kArray[UnsafeIndex()];
}
