// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Spanify basics test: expected rewrite'
// summary: Expected output for the basics spanify test, showing a raw array pointer rewritten into an SkSpan<int> while buffer usage stays unchanged.
// ---

#include "include/core/SkSpan.h"

void fct() {
  int buf[10];
  // Expected rewrite:
  // SkSpan<int> ptr = buf;
  SkSpan<int> ptr = buf;

  // Usage as a buffer, ptr should become a span.
  ptr[2] = 3;
}
