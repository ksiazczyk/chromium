// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Prominence notification setting alert coordinator header
// summary: Declares the Chrome coordinator that presents an alert informing the user that notifications are being delivered silently, with a delegate property.
// ---

#ifndef IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_PROMINENCE_NOTIFICATION_SETTING_ALERT_COORDINATOR_H_
#define IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_PROMINENCE_NOTIFICATION_SETTING_ALERT_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@protocol ProminenceNotificationSettingAlertCoordinatorDelegate;

// Coordinator for an alert that informs the user that notifications are being
// delivered silently.
@interface ProminenceNotificationSettingAlertCoordinator : ChromeCoordinator

@property(nonatomic, weak)
    id<ProminenceNotificationSettingAlertCoordinatorDelegate>
        delegate;

@end

#endif  // IOS_CHROME_BROWSER_PUSH_NOTIFICATION_COORDINATOR_PROMINENCE_NOTIFICATION_SETTING_ALERT_COORDINATOR_H_
