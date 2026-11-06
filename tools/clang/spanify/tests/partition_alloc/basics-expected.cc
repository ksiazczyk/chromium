// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify test expected output for basic pointer-to-span rewrite
// summary: Expected result of the spanify rewriter converting a raw int pointer into base::span in the partition_alloc basics test.
// ---

#include "partition_alloc/partition_alloc_base/containers/span.h"

namespace partition_alloc::internal {

void fct() {
  int buf[10];
  // Expected rewrite:
  // base::span<int> ptr = buf;
  base::span<int> ptr = buf;

  // Usage as a buffer, ptr should become a span.
  ptr[2] = 3;
}

}  // namespace partition_alloc::internal
