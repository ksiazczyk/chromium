// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Aura interactive test utility declarations
// summary: Declares Aura variants of the native window hide, show and focus helpers shared between win-aura and non-win-aura builds.
// ---

#ifndef CHROME_TEST_BASE_INTERACTIVE_TEST_UTILS_AURA_H_
#define CHROME_TEST_BASE_INTERACTIVE_TEST_UTILS_AURA_H_

#include "chrome/test/base/ui_test_utils.h"

#include "ui/aura/window.h"

namespace ui_test_utils {

// Aura variants of ui_test_utils method. Don't use these directly, they are
// used to share code between win-aura and non-win-aura.
void HideNativeWindowAura(gfx::NativeWindow window);
bool ShowAndFocusNativeWindowAura(gfx::NativeWindow window);

}  // namespace ui_test_utils

#endif  // CHROME_TEST_BASE_INTERACTIVE_TEST_UTILS_AURA_H_
