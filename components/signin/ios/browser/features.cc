// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Signin iOS feature helpers and switch names
// summary: Defines the startup sign-in promo helper and switch names controlling Gaia cookie update delays and capabilities API wait thresholds.
// ---

#include "components/signin/ios/browser/features.h"

#include "components/signin/public/base/signin_switches.h"

namespace signin {

bool ForceStartupSigninPromo() {
  return base::FeatureList::IsEnabled(switches::kForceStartupSigninPromo);
}

const char kDelayThresholdMinutesToUpdateGaiaCookie[] =
    "minutes-delay-to-restore-gaia-cookies-if-deleted";

const char kWaitThresholdMillisecondsForCapabilitiesApi[] =
    "wait-threshold-milliseconds-for-capabilities-api";

}  // namespace signin
