// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Notifications permission revocation config implementation
// summary: Implements the config helper that reports whether automatic revocation of notification permission from abusive origins is enabled via a feature flag.
// ---

#include "chrome/browser/permissions/notifications_permission_revocation_config.h"

#include "chrome/common/chrome_features.h"

bool NotificationsPermissionRevocationConfig::
    IsAbusiveOriginPermissionRevocationEnabled() {
  return base::FeatureList::IsEnabled(
      features::kAbusiveNotificationPermissionRevocation);
}
