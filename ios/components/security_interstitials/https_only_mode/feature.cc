// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Definitions of HTTPS-Only mode feature flags
// summary: Defines the kHttpsUpgrades and kInsecureFormSubmissionInterstitial base features used by the iOS HTTPS-Only mode component.
// ---

#include "ios/components/security_interstitials/https_only_mode/feature.h"

namespace security_interstitials {
namespace features {

BASE_FEATURE(kHttpsUpgrades, base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kInsecureFormSubmissionInterstitial,
             base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace features
}  // namespace security_interstitials
