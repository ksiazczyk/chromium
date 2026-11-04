// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TTC feature flag declarations
// summary: Declares the kTtc and kTtcFre feature flags used to enable TTC and to hide or suppress its unfinished first run experience.
// ---

#ifndef CHROME_BROWSER_TTC_CORE_FEATURES_H_
#define CHROME_BROWSER_TTC_CORE_FEATURES_H_

#include "base/feature_list.h"

namespace ttc {

// Enables TTC feature.
BASE_DECLARE_FEATURE(kTtc);

// Enables the first run experience feature for TTC. While FRE is under
// development, this is used to hide the unfinished FRE. Once FRE is complete,
// this can be used to suppress the feature in tests.
BASE_DECLARE_FEATURE(kTtcFre);

}  // namespace ttc

#endif  // CHROME_BROWSER_TTC_CORE_FEATURES_H_
