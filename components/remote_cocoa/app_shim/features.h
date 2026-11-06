// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote Cocoa app shim feature flags
// summary: Declares base::Feature flags that control macOS fullscreen, toolbar, and window move-loop behavior in the remote Cocoa app shim.
// ---

#ifndef COMPONENTS_REMOTE_COCOA_APP_SHIM_FEATURES_H_
#define COMPONENTS_REMOTE_COCOA_APP_SHIM_FEATURES_H_

#include "base/feature_list.h"
#include "components/remote_cocoa/app_shim/remote_cocoa_app_shim_export.h"

namespace remote_cocoa::features {
REMOTE_COCOA_APP_SHIM_EXPORT
BASE_DECLARE_FEATURE(kImmersiveFullscreenSpaceSwitchMitigation);
REMOTE_COCOA_APP_SHIM_EXPORT
BASE_DECLARE_FEATURE(kImmersiveFullscreenOverlayWindowDebug);
REMOTE_COCOA_APP_SHIM_EXPORT
BASE_DECLARE_FEATURE(kSuppressAppKitFrameAdjustmentsDuringMoveLoop);
REMOTE_COCOA_APP_SHIM_EXPORT
BASE_DECLARE_FEATURE(kMacFullScreenAuxiliaryFileDialog);
REMOTE_COCOA_APP_SHIM_EXPORT
BASE_DECLARE_FEATURE(kClearFirstResponderInToolbarFullScreenWindow);
}  // namespace remote_cocoa::features

#endif  // COMPONENTS_REMOTE_COCOA_APP_SHIM_FEATURES_H_
