// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Aura implementation of interactive test window helpers
// summary: Implements Aura variants of hiding, showing and focusing native windows used by interactive tests on non-Windows platforms.
// ---

#include "chrome/test/base/interactive_test_utils_aura.h"

#include "build/build_config.h"
#include "chrome/test/base/interactive_test_utils.h"
#include "ui/aura/window.h"
#include "ui/views/widget/widget.h"

namespace ui_test_utils {

#if !BUILDFLAG(IS_WIN)
void HideNativeWindow(gfx::NativeWindow window) {
  HideNativeWindowAura(window);
}

bool ShowAndFocusNativeWindow(gfx::NativeWindow window) {
  return ShowAndFocusNativeWindowAura(window);
}
#endif

void HideNativeWindowAura(gfx::NativeWindow window) {
  window->Hide();
}

bool ShowAndFocusNativeWindowAura(gfx::NativeWindow window) {
  window->Show();
  if (views::Widget* widget = views::Widget::GetWidgetForNativeWindow(window)) {
    widget->Activate();
  }
  window->Focus();
  return true;
}

}  // namespace ui_test_utils
