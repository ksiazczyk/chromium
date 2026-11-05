// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: iOS promo type configs definitions
// summary: Defines the default constructors, destructor, and copy assignment operators for the IOSPromoTypeConfigs struct.
// ---

#include "chrome/browser/ui/views/promos/ios_promo_constants.h"

namespace IOSPromoConstants {

IOSPromoTypeConfigs::IOSPromoTypeConfigs() = default;

IOSPromoTypeConfigs::~IOSPromoTypeConfigs() = default;

IOSPromoTypeConfigs::IOSPromoTypeConfigs(const IOSPromoTypeConfigs&) = default;

IOSPromoTypeConfigs& IOSPromoTypeConfigs::operator=(
    const IOSPromoTypeConfigs&) = default;

}  // namespace IOSPromoConstants
