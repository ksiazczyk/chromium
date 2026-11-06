// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify basics test, expected output
// summary: Expected spanify rewrite result for the Dawn basics case, showing a raw array pointer converted to dawn::Span<int> and indexed as a buffer.
// ---

#include "src/utils/span.h"

namespace dawn::internal {

void fct() {
  int buf[10];
  // Expected rewrite:
  // dawn::Span<int> ptr = buf;
  dawn::Span<int> ptr = buf;

  // Usage as a buffer, ptr should become a span.
  ptr[2] = 3;
}

}  // namespace dawn::internal
