// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock ADB sideloading policy change notification
// summary: Mock notification handler that records the last shown ADB sideloading policy change notification type for use in tests.
// ---

#include "chrome/browser/ash/notifications/mock_adb_sideloading_policy_change_notification.h"

namespace ash {

MockAdbSideloadingPolicyChangeNotification::
    MockAdbSideloadingPolicyChangeNotification(
        const policy::BrowserPolicyConnectorAsh* browser_policy_connector_ash)
    : AdbSideloadingPolicyChangeNotification(browser_policy_connector_ash) {}

MockAdbSideloadingPolicyChangeNotification::
    ~MockAdbSideloadingPolicyChangeNotification() = default;

void MockAdbSideloadingPolicyChangeNotification::Show(NotificationType type) {
  last_shown_notification = type;
}

}  // namespace ash
