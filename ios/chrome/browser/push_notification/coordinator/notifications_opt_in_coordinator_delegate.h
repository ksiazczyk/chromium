// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Notifications opt-in coordinator delegate protocol
// summary: Declares the delegate protocol notified when the notifications opt-in screen finishes displaying.
// ---

#ifndef IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_NOTIFICATIONS_OPT_IN_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_NOTIFICATIONS_OPT_IN_COORDINATOR_DELEGATE_H_

@class NotificationsOptInCoordinator;

// Protocol used to send events from a NotificationsOptInCoordinator.
@protocol NotificationsOptInCoordinatorDelegate <NSObject>

// Indicates that the opt-in screen has finished displaying.
- (void)notificationsOptInScreenDidFinish:
    (NotificationsOptInCoordinator*)coordinator;

@end

#endif  // IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_NOTIFICATIONS_OPT_IN_COORDINATOR_DELEGATE_H_
