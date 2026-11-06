// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PriceTrackingPromoActionDelegate protocol header
// summary: Declares a protocol for delegating actions, such as showing the price tracking promo alert coordinator, to the owner of the mediator.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_PRICE_TRACKING_PROMO_COORDINATOR_PRICE_TRACKING_PROMO_ACTION_DELEGATE_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_PRICE_TRACKING_PROMO_COORDINATOR_PRICE_TRACKING_PROMO_ACTION_DELEGATE_H_

// Protocol for delegating actions to the owner of the
// PriceTrackingPromoMediator
@protocol PriceTrackingPromoActionDelegate

// Show alert giving user the option of turning on notifications for the app.
- (void)showPriceTrackingPromoAlertCoordinator;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_PRICE_TRACKING_PROMO_COORDINATOR_PRICE_TRACKING_PROMO_ACTION_DELEGATE_H_
