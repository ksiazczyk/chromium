// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: External intents feature flag declarations
// summary: Declares the external_intents feature flags for use in native code, mirroring the features exposed to the Java ExternalIntentsFeatures API.
// ---

#ifndef COMPONENTS_EXTERNAL_INTENTS_ANDROID_EXTERNAL_INTENTS_FEATURES_H_
#define COMPONENTS_EXTERNAL_INTENTS_ANDROID_EXTERNAL_INTENTS_FEATURES_H_

#include "base/feature_list.h"

namespace external_intents {

BASE_DECLARE_FEATURE(kExternalNavigationDebugLogs);
BASE_DECLARE_FEATURE(kDontClobberTabsWithChromeAppId);
BASE_DECLARE_FEATURE(kWebApkSelfOwnedRendererNavLaunch);

}  // namespace external_intents

#endif  // COMPONENTS_EXTERNAL_INTENTS_ANDROID_EXTERNAL_INTENTS_FEATURES_H_
