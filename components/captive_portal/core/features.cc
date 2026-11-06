// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Captive portal feature flag definition
// summary: Defines the kCaptivePortalUpdatedOrigin base feature, enabled by default, for the captive portal component.
// ---

#include "components/captive_portal/core/features.h"

namespace captive_portal::features {

BASE_FEATURE(kCaptivePortalUpdatedOrigin, base::FEATURE_ENABLED_BY_DEFAULT);

}  // namespace captive_portal::features
