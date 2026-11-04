// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: window_state_delegate.cc
// summary: Provides default WindowStateDelegate behavior, returning false for fullscreen toggling and performing no-ops for trusted pinning.
// ---

#include "ash/wm/window_state_delegate.h"

namespace ash {

WindowStateDelegate::WindowStateDelegate() = default;

WindowStateDelegate::~WindowStateDelegate() = default;

bool WindowStateDelegate::ToggleFullscreen(WindowState* window_state) {
  return false;
}

void WindowStateDelegate::ToggleTrustedPinned(WindowState* window_state) {}

}  // namespace ash
