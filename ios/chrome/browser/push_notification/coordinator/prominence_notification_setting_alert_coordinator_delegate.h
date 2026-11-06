// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Prominence notification setting alert coordinator delegate protocol
// summary: Defines the delegate protocol used to notify when the prominence notification setting alert coordinator should be dismissed.
// ---

#ifndef IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_PROMINENCE_NOTIFICATION_SETTING_ALERT_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_PROMINENCE_NOTIFICATION_SETTING_ALERT_COORDINATOR_DELEGATE_H_

@class ProminenceNotificationSettingAlertCoordinator;

// Delegate for ProminenceNotificationSettingAlertCoordinator actions.
@protocol ProminenceNotificationSettingAlertCoordinatorDelegate

// Indicates to the delegate that this coordinator should be dismissed.
- (void)prominenceNotificationSettingAlertCoordinatorIsDone:
    (ProminenceNotificationSettingAlertCoordinator*)coordinator;

@end

#endif  // IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_PROMINENCE_NOTIFICATION_SETTING_ALERT_COORDINATOR_DELEGATE_H_
