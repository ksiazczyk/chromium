// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Notifications navigation commands protocol
// summary: Declares a protocol for navigating from the notifications settings page to the price tracking and content settings screens.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_NOTIFICATIONS_NOTIFICATIONS_NAVIGATION_COMMANDS_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_NOTIFICATIONS_NOTIFICATIONS_NAVIGATION_COMMANDS_H_

// Protocol for navigating to different setting pages from Notifications
// setting.
@protocol NotificationsNavigationCommands <NSObject>

// Shows tracking price screen.
- (void)showTrackingPrice;

// Shows the content screen.
- (void)showContent;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_NOTIFICATIONS_NOTIFICATIONS_NAVIGATION_COMMANDS_H_
