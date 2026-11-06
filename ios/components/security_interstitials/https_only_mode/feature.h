// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Declarations of HTTPS-Only mode feature flags
// summary: Declares feature flags for HTTPS-Only mode upgrades, HTTPS upgrades and the insecure form submission interstitial on iOS.
// ---

#ifndef IOS_COMPONENTS_SECURITY_INTERSTITIALS_HTTPS_ONLY_MODE_FEATURE_H_
#define IOS_COMPONENTS_SECURITY_INTERSTITIALS_HTTPS_ONLY_MODE_FEATURE_H_

#include "base/feature_list.h"

namespace security_interstitials {
namespace features {

// Enables HTTPS-Only mode upgrades on iOS.
BASE_DECLARE_FEATURE(kHttpsOnlyMode);

// Enables HTTPS upgrades on iOS.
BASE_DECLARE_FEATURE(kHttpsUpgrades);

// Controls whether an interstitial is shown when submitting a mixed form.
BASE_DECLARE_FEATURE(kInsecureFormSubmissionInterstitial);

}  // namespace features
}  // namespace security_interstitials

#endif  // IOS_COMPONENTS_SECURITY_INTERSTITIALS_HTTPS_ONLY_MODE_FEATURE_H_
