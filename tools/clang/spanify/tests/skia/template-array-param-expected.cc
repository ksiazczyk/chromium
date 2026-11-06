// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify template array parameter expected output
// summary: Expected rewrite output converting a template function's fixed-size array parameter into an SkSpan parameter.
// ---

#include "include/core/SkSpan.h"

template <typename T>
void init9(SkSpan<T> array) {
  for (int i = 0; i < 9; i++) {
    array[i] = T();
  }
}
