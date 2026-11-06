// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FCM feature flag definition
// summary: Defines the kUseFcmService base feature, disabled by default, that controls whether FcmService is used instead of GCMDriver.
// ---

#include "components/fcm/features.h"

namespace fcm {

BASE_FEATURE(kUseFcmService, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace fcm
