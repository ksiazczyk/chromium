// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Status icons feature declarations
// summary: Declares the kHideStatusIconMacInFullscreen feature that hides status tray icons while a browser window is fullscreen.
// ---

#ifndef CHROME_BROWSER_UI_COCOA_STATUS_ICONS_STATUS_ICONS_FEATURES_H_
#define CHROME_BROWSER_UI_COCOA_STATUS_ICONS_STATUS_ICONS_FEATURES_H_

#include "base/feature_list.h"

namespace features {

// Workaround for macOS 26.x-only bug where displaying a visible status bar icon
// during fullscreen can cause a frozen window to remain on screen after exiting
// fullscreen. When enabled, hides all Chrome status tray icons while the
// browser window is in fullscreen.
BASE_DECLARE_FEATURE(kHideStatusIconMacInFullscreen);

}  // namespace features

#endif  // CHROME_BROWSER_UI_COCOA_STATUS_ICONS_STATUS_ICONS_FEATURES_H_
