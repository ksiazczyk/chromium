// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Animated Lens promo coordinator header
// summary: Declares the AnimatedLensPromoCoordinator class that presents the Animated Lens promo during first run and communicates with the FirstRunCoordinator through a delegate.
// ---

#ifndef IOS_CHROME_BROWSER_FIRST_RUN_ANIMATED_LENS_COORDINATOR_ANIMATED_LENS_PROMO_COORDINATOR_H_
#define IOS_CHROME_BROWSER_FIRST_RUN_ANIMATED_LENS_COORDINATOR_ANIMATED_LENS_PROMO_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"
#import "ios/chrome/common/ui/promo_style/promo_style_view_controller_delegate.h"

@protocol FirstRunScreenDelegate;

// Coordinator to present the Animated Lens Promo.
@interface AnimatedLensPromoCoordinator
    : ChromeCoordinator <PromoStyleViewControllerDelegate>

// Delegate for communicating with the FirstRunCoordinator.
@property(nonatomic, weak) id<FirstRunScreenDelegate> firstRunDelegate;

// Initializes an AnimatedLensPromoCoordinator with `navigationController` and
// `browser`.
- (instancetype)initWithBaseNavigationController:
                    (UINavigationController*)navigationController
                                         browser:(Browser*)browser
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_FIRST_RUN_ANIMATED_LENS_COORDINATOR_ANIMATED_LENS_PROMO_COORDINATOR_H_
