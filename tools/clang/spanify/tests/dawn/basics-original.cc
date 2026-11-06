// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify basics test, original input
// summary: Original input for the Dawn basics spanify test, using an int* pointer into a buffer that the tool is expected to rewrite to dawn::Span<int>.
// ---

namespace dawn::internal {

void fct() {
  int buf[10];
  // Expected rewrite:
  // dawn::Span<int> ptr = buf;
  int* ptr = buf;

  // Usage as a buffer, ptr should become a span.
  ptr[2] = 3;
}

}  // namespace dawn::internal
