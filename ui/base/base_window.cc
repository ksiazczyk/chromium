// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BaseWindow IsRestored implementation
// summary: Implements BaseWindow::IsRestored, which reports whether a window is neither maximized, minimized, nor fullscreen.
// ---

#include "ui/base/base_window.h"

namespace ui {

bool BaseWindow::IsRestored(const BaseWindow& window) {
  return !window.IsMaximized() &&
     !window.IsMinimized() &&
     !window.IsFullscreen();
}

}  // namespace ui

