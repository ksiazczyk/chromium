// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OnTask notification constants implementation
// summary: Implements the helper that returns the set of notification IDs allowlisted while OnTask is in locked mode.
// ---

#include "chromeos/ash/components/boca/on_task/notification_constants.h"

#include "base/containers/flat_set.h"
#include "chromeos/ash/components/boca/spotlight/spotlight_notification_constants.h"

namespace ash::boca {

base::flat_set<std::string> GetAllowlistedNotificationIdsForLockedMode() {
  return {kOnTaskEnterLockedModeNotificationId, kOnTaskSessionEndNotificationId,
          kOnTaskBundleContentAddedNotificationId,
          kOnTaskBundleContentRemovedNotificationId,
          kSpotlightStartedNotificationId};
}

}  // namespace ash::boca
