// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Array static global original input
// summary: Input fixture with a static global C array indexed unsafely, used to test the spanify rewriter against its expected output counterpart.
// ---

#include <tuple>

int UnsafeIndex();  // This function might return an out-of-bound index.

// Expected rewrite:
// static const auto kByteStringsUnlocalized =
//     std::to_array<const char*>({" B", " kB"});
static const char* const kByteStringsUnlocalized[] = {" B", " kB"};

void fct() {
  std::ignore = kByteStringsUnlocalized[UnsafeIndex()];
}
