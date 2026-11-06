// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring bottom sheet feature flags
// summary: Declares the bottom sheet feature flags in the browser_ui namespace for use across the component.
// ---

#ifndef COMPONENTS_BROWSER_UI_BOTTOMSHEET_ANDROID_FEATURES_H_
#define COMPONENTS_BROWSER_UI_BOTTOMSHEET_ANDROID_FEATURES_H_

#include "base/feature_list.h"

namespace browser_ui {

BASE_DECLARE_FEATURE(kBottomSheetDeferContentSwapOnHidden);
BASE_DECLARE_FEATURE(kBottomSheetTypes);

}  // namespace browser_ui

#endif  // COMPONENTS_BROWSER_UI_BOTTOMSHEET_ANDROID_FEATURES_H_
