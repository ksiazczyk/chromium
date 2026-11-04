// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chime Android SDK feature flag definition
// summary: Defines the kUseChimeAndroidSdk base::Feature, which is disabled by default, in the notifications::features namespace.
// ---

#include "chrome/browser/notifications/chime/android/features.h"

namespace notifications {
namespace features {

BASE_FEATURE(kUseChimeAndroidSdk, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace features

}  // namespace notifications
