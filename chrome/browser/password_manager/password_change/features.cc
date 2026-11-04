// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: config
// title: Password change feature flag definitions
// summary: Defines disabled-by-default feature flags for Glic-based password change and the private inference login check.
// ---

#include "chrome/browser/password_manager/password_change/features.h"

namespace password_change::features {

BASE_FEATURE(kPasswordChangeWithGlic, base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kPasswordChangeWithPrivateInferenceLoginCheck,
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace password_change::features
