// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Original spanify input with raw array pointer
// summary: Original webrtc test input using a raw pointer to an array, used to verify the spanify tool rewrites it to std::span.
// ---

namespace webrtc {

void fct() {
  int buf[10];
  // Expected rewrite:
  // std::span<int> ptr = buf;
  int* ptr = buf;

  // Usage as a buffer, ptr should become a span.
  ptr[2] = 3;
}

}  // namespace webrtc
