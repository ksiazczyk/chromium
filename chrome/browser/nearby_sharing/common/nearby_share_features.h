// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Nearby Share feature flag declarations
// summary: Declares the Nearby Share feature flags and the functions that report whether each flag is enabled.
// ---

#ifndef CHROME_BROWSER_NEARBY_SHARING_COMMON_NEARBY_SHARE_FEATURES_H_
#define CHROME_BROWSER_NEARBY_SHARING_COMMON_NEARBY_SHARE_FEATURES_H_

#include "base/feature_list.h"

namespace features {

BASE_DECLARE_FEATURE(kIsNameEnabled);
bool IsNameEnabled();
BASE_DECLARE_FEATURE(kNearbySharingRestrictToContacts);
bool IsRestrictToContactsEnabled();

}  // namespace features

#endif  // CHROME_BROWSER_NEARBY_SHARING_COMMON_NEARBY_SHARE_FEATURES_H_
