// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Power monitor feature definitions
// summary: Defines the kRemoveIOSPowerEventNotifications feature flag that disables iOS suspend and resume power event notifications.
// ---

#include "base/power_monitor/power_monitor_features.h"

#include "base/feature_list.h"

namespace base {

#if BUILDFLAG(IS_IOS)
BASE_FEATURE(kRemoveIOSPowerEventNotifications, FEATURE_DISABLED_BY_DEFAULT);
#endif

}  // namespace base
