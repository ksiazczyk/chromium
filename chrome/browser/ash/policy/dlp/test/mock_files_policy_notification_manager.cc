// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock files policy notification manager
// summary: Implements the constructor and destructor of the mock FilesPolicyNotificationManager used in DLP files tests.
// ---

#include "chrome/browser/ash/policy/dlp/test/mock_files_policy_notification_manager.h"

namespace policy {

MockFilesPolicyNotificationManager::MockFilesPolicyNotificationManager(
    content::BrowserContext* context)
    : FilesPolicyNotificationManager(context) {}

MockFilesPolicyNotificationManager::~MockFilesPolicyNotificationManager() =
    default;

}  // namespace policy
