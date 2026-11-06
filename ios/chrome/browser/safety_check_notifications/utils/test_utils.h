// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test helper for Safety Check notification permissions
// summary: Declares a helper that toggles the app-level Safety Check notification permission preference for tests.
// ---

#ifndef IOS_CHROME_BROWSER_SAFETY_CHECK_NOTIFICATIONS_UTILS_TEST_UTILS_H_
#define IOS_CHROME_BROWSER_SAFETY_CHECK_NOTIFICATIONS_UTILS_TEST_UTILS_H_

// Updates the app-level notification permission for Safety Check notifications.
// This function modifies the `kAppLevelPushNotificationPermissions` preference
// dictionary in local Prefs to enable or disable Safety Check notifications.
// Pass `YES` to enable notifications or `NO` to disable them.
void UpdateSafetyCheckNotificationsPermission(bool enable);

#endif  // IOS_CHROME_BROWSER_SAFETY_CHECK_NOTIFICATIONS_UTILS_TEST_UTILS_H_
