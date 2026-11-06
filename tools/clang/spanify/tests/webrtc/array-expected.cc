// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Array spanification expected output
// summary: Expected post-rewrite code for the WebRTC array test, where the raw int array is converted to std::array and indexing triggers spanification.
// ---

#include <array>
#include <tuple>

namespace webrtc {

void array_fct() {
  // Expected rewrite:
  // std::array<int, 5> arr = {1, 2, 3, 4, 5};
  std::array<int, 5> arr = {1, 2, 3, 4, 5};
  int index = 2;
  // Trigger spanification.
  std::ignore = arr[index];
}

}  // namespace webrtc
