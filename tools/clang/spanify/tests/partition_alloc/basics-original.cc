// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify test input for basic raw pointer buffer usage
// summary: Input for the spanify basics test, using a raw int pointer as a buffer that the rewriter should turn into a span.
// ---

namespace partition_alloc::internal {

void fct() {
  int buf[10];
  // Expected rewrite:
  // base::span<int> ptr = buf;
  int* ptr = buf;

  // Usage as a buffer, ptr should become a span.
  ptr[2] = 3;
}

}  // namespace partition_alloc::internal
