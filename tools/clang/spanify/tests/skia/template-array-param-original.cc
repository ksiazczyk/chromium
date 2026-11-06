// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify template array parameter original input
// summary: Input fixture with a template function taking a fixed-size array parameter, used to test the spanify rewriter's template handling.
// ---

template <typename T>
void init9(T array[9]) {
  for (int i = 0; i < 9; i++) {
    array[i] = T();
  }
}
