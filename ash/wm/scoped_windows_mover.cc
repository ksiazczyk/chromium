// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedWindowsMover implementation
// summary: Implements ScopedWindowsMover, which moves the collected windows to a destination display when the object is destroyed and then runs a completion callback.
// ---

#include "ash/wm/scoped_windows_mover.h"

#include "ash/wm/window_util.h"
#include "base/logging.h"
#include "ui/aura/window.h"

namespace ash {

ScopedWindowsMover::ScopedWindowsMover(int64_t dest_display_id)
    : dest_display_id_(dest_display_id) {}

ScopedWindowsMover::~ScopedWindowsMover() {
  for (auto window : windows_) {
    window_util::MoveWindowToDisplay(window.get(), dest_display_id_);
  }
  if (moved_callback_) {
    std::move(moved_callback_).Run();
  }
}

}  // namespace ash
