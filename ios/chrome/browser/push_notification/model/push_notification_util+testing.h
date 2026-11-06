// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PushNotificationUtil testing category
// summary: Testing category on PushNotificationUtil exposing a hook to log permission settings metrics for push notifications.
// ---

#ifndef IOS_CHROME_BROWSER_PUSH_NOTIFICATION_MODEL_PUSH_NOTIFICATION_UTIL_TESTING_H_
#define IOS_CHROME_BROWSER_PUSH_NOTIFICATION_MODEL_PUSH_NOTIFICATION_UTIL_TESTING_H_

#import <UserNotifications/UserNotifications.h>

@interface PushNotificationUtil (Testing)

// This functions retrieves the authorization and feature-related settings for
// push notifications.
+ (void)logPermissionSettingsMetrics:(UNAuthorizationStatus)authorizationStatus;

@end

#endif  // IOS_CHROME_BROWSER_PUSH_NOTIFICATION_MODEL_PUSH_NOTIFICATION_UTIL_TESTING_H_
