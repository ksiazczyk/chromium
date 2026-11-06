// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BlueZ feature flag definitions
// summary: Defines the BlueZ feature flag kLinkLayerPrivacy, disabled by default.
// ---

#include "device/bluetooth/bluez/bluez_features.h"

namespace bluez::features {

BASE_FEATURE(kLinkLayerPrivacy, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace bluez::features
