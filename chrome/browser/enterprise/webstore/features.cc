// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Webstore navigation throttle feature definition
// summary: Defines the kChromeWebStoreNavigationThrottle feature flag, enabled by default, for the webstore navigation throttle.
// ---

#include "chrome/browser/enterprise/webstore/features.h"

#include "base/feature_list.h"

namespace enterprise::webstore {

BASE_FEATURE(kChromeWebStoreNavigationThrottle,
             base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace enterprise::webstore
