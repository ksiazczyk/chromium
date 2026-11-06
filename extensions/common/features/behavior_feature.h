// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Behavior feature name constants header
// summary: Declares constants corresponding to keys in _behavior_features.json used to identify extension behavior features.
// ---

#ifndef EXTENSIONS_COMMON_FEATURES_BEHAVIOR_FEATURE_H_
#define EXTENSIONS_COMMON_FEATURES_BEHAVIOR_FEATURE_H_

namespace extensions {

// Contains constants corresponding to keys in _behavior_features.json.
// One day we might want to auto generate these.
namespace behavior_feature {

extern const char kZoomWithoutBubble[];
extern const char kAllowUsbDevicesPermissionInterfaceClass[];
extern const char kSigninScreen[];
extern const char kAllowSecondaryKioskAppEnabledOnLaunch[];
extern const char kKeyPermissionsInLoginScreen[];
extern const char kImprivataExtension[];
extern const char kImprivataInSessionExtension[];
extern const char kImprivataLoginScreenExtension[];

}  // namespace behavior_feature

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_FEATURES_BEHAVIOR_FEATURE_H_
