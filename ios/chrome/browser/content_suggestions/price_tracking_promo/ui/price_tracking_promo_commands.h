// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PriceTrackingPromoCommands protocol header
// summary: Declares the PriceTrackingPromoCommands protocol with the allowPriceTrackingNotifications action for the promo module.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_PRICE_TRACKING_PROMO_UI_PRICE_TRACKING_PROMO_COMMANDS_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_PRICE_TRACKING_PROMO_UI_PRICE_TRACKING_PROMO_COMMANDS_H_

// Command protocol for events for the Price Tracking Promo module.
@protocol PriceTrackingPromoCommands

// User taps 'Allow Price Tracking Notifications' on the Price
// Tracking Promo magic stack module.
- (void)allowPriceTrackingNotifications;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_PRICE_TRACKING_PROMO_UI_PRICE_TRACKING_PROMO_COMMANDS_H_
