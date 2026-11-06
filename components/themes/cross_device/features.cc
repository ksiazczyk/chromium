// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feature flag definitions for cross-device themes
// summary: Defines the kCrossDeviceThemeTracker base feature, disabled by default, that gates the cross-device theme tracker.
// ---

#include "components/themes/cross_device/features.h"

#include "base/feature_list.h"

namespace themes {

BASE_FEATURE(kCrossDeviceThemeTracker,
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace themes
