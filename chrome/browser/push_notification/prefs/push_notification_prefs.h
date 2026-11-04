// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Push notification prefs header
// summary: Declares the push notification pref name constants and the RegisterPushNotificationPrefs function for the push_notification namespace.
// ---

#ifndef CHROME_BROWSER_PUSH_NOTIFICATION_PREFS_PUSH_NOTIFICATION_PREFS_H_
#define CHROME_BROWSER_PUSH_NOTIFICATION_PREFS_PUSH_NOTIFICATION_PREFS_H_

class PrefRegistrySimple;

namespace push_notification {

namespace prefs {

extern const char
    kPushNotificationRegistrationAttemptBackoffSchedulerPrefName[];
extern const char kPushNotificationRepresentativeTargetIdPrefName[];

}  // namespace prefs

void RegisterPushNotificationPrefs(PrefRegistrySimple* registry);

}  // namespace push_notification

#endif  // CHROME_BROWSER_PUSH_NOTIFICATION_PREFS_PUSH_NOTIFICATION_PREFS_H_
