// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feature flag declarations for cross-device themes
// summary: Declares the kCrossDeviceThemeTracker feature used to enable tracking of themes across devices.
// ---

#ifndef COMPONENTS_THEMES_CROSS_DEVICE_FEATURES_H_
#define COMPONENTS_THEMES_CROSS_DEVICE_FEATURES_H_

#include "base/feature_list.h"

namespace themes {

// Enables the CrossDeviceThemeTracker which tracks themes across devices.
BASE_DECLARE_FEATURE(kCrossDeviceThemeTracker);

}  // namespace themes

#endif  // COMPONENTS_THEMES_CROSS_DEVICE_FEATURES_H_
