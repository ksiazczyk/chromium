// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MainFrameCounter implementation
// summary: Implements MainFrameCounter, which tracks how many main frames exist in the current renderer process.
// ---

#include "content/common/main_frame_counter.h"
#include "base/check_op.h"

namespace content {

// static
size_t MainFrameCounter::main_frame_count_ = 0;

// static
bool MainFrameCounter::has_main_frame() {
  return main_frame_count_ > 0;
}

// static
void MainFrameCounter::IncrementCount() {
  main_frame_count_++;
}

// static
void MainFrameCounter::DecrementCount() {
  // If this check fails, we have miscounted somewhere.
  DCHECK_GT(main_frame_count_, 0u);
  main_frame_count_--;
}

}  // namespace content
