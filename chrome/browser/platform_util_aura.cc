// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Aura platform util implementation
// summary: Aura implementation of the window helpers such as top-level lookup, view parenting, window activation, and visibility checks.
// ---

#include "chrome/browser/platform_util.h"

#include "base/check.h"
#include "ui/aura/window.h"
#include "ui/wm/core/window_util.h"

namespace platform_util {

gfx::NativeWindow GetTopLevel(gfx::NativeView view) {
  return view->GetToplevelWindow();
}

gfx::NativeView GetViewForWindow(gfx::NativeWindow window) {
  DCHECK(window);
  return window;
}

gfx::NativeView GetParent(gfx::NativeView view) {
  return view->parent();
}

bool IsWindowActive(gfx::NativeWindow window) {
  return wm::IsActiveWindow(window);
}

void ActivateWindow(gfx::NativeWindow window) {
  wm::ActivateWindow(window);
}

bool IsVisible(gfx::NativeView view) {
  return view->IsVisible();
}

}  // namespace platform_util
