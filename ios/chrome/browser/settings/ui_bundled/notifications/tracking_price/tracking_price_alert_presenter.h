// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tracking price alert presenter header
// summary: Declares the TrackingPriceAlertPresenter protocol for showing alerts that direct users to OS notification permission settings.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_NOTIFICATIONS_TRACKING_PRICE_TRACKING_PRICE_ALERT_PRESENTER_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_NOTIFICATIONS_TRACKING_PRICE_TRACKING_PRICE_ALERT_PRESENTER_H_

#import <Foundation/Foundation.h>

@class PriceNotificationsTableViewItem;

// Protocol for displaying Price Tracking related UIAlerts
@protocol TrackingPriceAlertPresenter <NSObject>

// Displays the UIAlert that directs the user to the OS permission settings to
// enable push notification permissions when the user toggles Chrome-level push
// notification permissions for price tracking.
- (void)presentPushNotificationPermissionAlert;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_NOTIFICATIONS_TRACKING_PRICE_TRACKING_PRICE_ALERT_PRESENTER_H_
