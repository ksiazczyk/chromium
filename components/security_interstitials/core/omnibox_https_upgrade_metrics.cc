// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Omnibox HTTPS upgrade metrics constants
// summary: Defines the histogram name constant used to log omnibox HTTPS upgrade navigation events.
// ---

#include "components/security_interstitials/core/omnibox_https_upgrade_metrics.h"

namespace security_interstitials::omnibox_https_upgrades {

const char kEventHistogram[] = "TypedNavigationUpgradeThrottle.Event";

}
