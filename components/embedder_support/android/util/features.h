// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Embedder support feature flag declarations
// summary: Declares the feature flags used by Android embedder support utilities, covering a Chrome scheme navigation kill switch and input stream handling optimizations.
// ---

#ifndef COMPONENTS_EMBEDDER_SUPPORT_ANDROID_UTIL_FEATURES_H_
#define COMPONENTS_EMBEDDER_SUPPORT_ANDROID_UTIL_FEATURES_H_

#include "base/feature_list.h"

namespace embedder_support::features {

// Enables navigation to chrome:// scheme from chrome:// tabs.
BASE_DECLARE_FEATURE(kAndroidChromeSchemeNavigationKillSwitch);

// Enables optimizations to input stream handling.
BASE_DECLARE_FEATURE(kInputStreamOptimizations);

}  // namespace embedder_support::features

#endif  // COMPONENTS_EMBEDDER_SUPPORT_ANDROID_UTIL_FEATURES_H_
