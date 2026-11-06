// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Push notification preferences header
// summary: Declares push notification local state preferences, including the last Send Tab To Self notification open timestamp, and their registration function.
// ---

#ifndef IOS_CHROME_BROWSER_PUSH_NOTIFICATION_MODEL_PUSH_NOTIFICATION_PREFS_H_
#define IOS_CHROME_BROWSER_PUSH_NOTIFICATION_MODEL_PUSH_NOTIFICATION_PREFS_H_

class PrefRegistrySimple;

namespace push_notification_prefs {

// Pref holding the timestamp of the last Send Tab To Self notification open.
extern const char kSendTabLastOpenTimestamp[];

// Registers the prefs associated with Push Notifications.
void RegisterLocalStatePrefs(PrefRegistrySimple* registry);

}  // namespace push_notification_prefs

#endif  // IOS_CHROME_BROWSER_PUSH_NOTIFICATION_MODEL_PUSH_NOTIFICATION_PREFS_H_
