// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Notifications opt-in item identifier enum
// summary: Defines an enum of the notification types, such as content, tips, price tracking, and safety check, that users can opt in or out of.
// ---

#ifndef IOS_CHROME_BROWSER_PUSH_NOTIFICATION_UI_NOTIFICATIONS_OPT_IN_ITEM_IDENTIFIER_H_
#define IOS_CHROME_BROWSER_PUSH_NOTIFICATION_UI_NOTIFICATIONS_OPT_IN_ITEM_IDENTIFIER_H_

// Enum representing the different types of notifications that can be opted in
// or out of in the settings page.
enum NotificationsOptInItemIdentifier {
  kContent,
  kTips,
  kPriceTracking,
  kSafetyCheck,
  kMaxValue = kSafetyCheck,
};

#endif  // IOS_CHROME_BROWSER_PUSH_NOTIFICATION_UI_NOTIFICATIONS_OPT_IN_ITEM_IDENTIFIER_H_
