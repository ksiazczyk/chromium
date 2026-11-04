// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebAPK shell update feature definitions
// summary: Defines base features and parameters that control the WebAPK shell update and minimum shell version behavior.
// ---

#include "chrome/browser/android/webapk/webapk_features.h"

BASE_FEATURE(kWebApkShellUpdate, base::FEATURE_ENABLED_BY_DEFAULT);

const base::FeatureParam<int> kWebApkTargetShellVersion{
    &kWebApkShellUpdate, "version", REQUEST_UPDATE_FOR_SHELL_APK_VERSION_VALUE};

BASE_FEATURE(kWebApkMinShellVersion, base::FEATURE_ENABLED_BY_DEFAULT);
