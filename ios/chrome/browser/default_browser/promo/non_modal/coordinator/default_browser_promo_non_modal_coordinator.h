// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default browser non-modal promo coordinator header
// summary: Declares the InfobarCoordinator subclass that creates and manages the non-modal default browser promo.
// ---

#ifndef IOS_CHROME_BROWSER_DEFAULT_BROWSER_PROMO_NON_MODAL_COORDINATOR_DEFAULT_BROWSER_PROMO_NON_MODAL_COORDINATOR_H_
#define IOS_CHROME_BROWSER_DEFAULT_BROWSER_PROMO_NON_MODAL_COORDINATOR_DEFAULT_BROWSER_PROMO_NON_MODAL_COORDINATOR_H_

#import "ios/chrome/browser/infobars/ui_bundled/coordinators/infobar_coordinator.h"

enum class NonModalDefaultBrowserPromoReason;

// Coordinator that creates and manages a non-modal default browser promo.
@interface DefaultBrowserPromoNonModalCoordinator : InfobarCoordinator

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser
                               promoReason:(NonModalDefaultBrowserPromoReason)
                                               promoReason
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser
                                      type:(InfobarType)infobarType
    NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_DEFAULT_BROWSER_PROMO_NON_MODAL_COORDINATOR_DEFAULT_BROWSER_PROMO_NON_MODAL_COORDINATOR_H_
