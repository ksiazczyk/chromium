// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Price notifications view coordinator header
// summary: Declares the coordinator that presents the price notifications UI and serves as the price notifications alert presenter.
// ---

#ifndef IOS_CHROME_BROWSER_PRICE_NOTIFICATIONS_UI_BUNDLED_PRICE_NOTIFICATIONS_VIEW_COORDINATOR_H_
#define IOS_CHROME_BROWSER_PRICE_NOTIFICATIONS_UI_BUNDLED_PRICE_NOTIFICATIONS_VIEW_COORDINATOR_H_

#import "ios/chrome/browser/price_notifications/ui_bundled/price_notifications_alert_presenter.h"
#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"
#import "ios/chrome/browser/shared/public/commands/price_tracked_items_commands.h"

@class CommandDispatcher;

// Coordinator for Price Notifications, displaying the Price Notifications when
// starting.
@interface PriceNotificationsViewCoordinator
    : ChromeCoordinator <PriceNotificationsAlertPresenter>

// Displays the current page the user is viewing in the price tracking menu.
@property(nonatomic, assign) BOOL showCurrentPage;

@end

#endif  // IOS_CHROME_BROWSER_PRICE_NOTIFICATIONS_UI_BUNDLED_PRICE_NOTIFICATIONS_VIEW_COORDINATOR_H_
