// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Shopping coordinator interface
// summary: Declares the coordinator for the Shopping settings page and its delegate protocol for removal.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_COORDINATOR_SHOPPING_COORDINATOR_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_COORDINATOR_SHOPPING_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@class ShoppingCoordinator;

// Delegate for ShoppingCoordinator.
@protocol ShoppingCoordinatorDelegate <NSObject>

// Called when the coordinator should be stopped.
- (void)shoppingCoordinatorDidRemove:(ShoppingCoordinator*)coordinator;

@end

// Coordinator for the Shopping settings page.
@interface ShoppingCoordinator : ChromeCoordinator

@property(nonatomic, weak) id<ShoppingCoordinatorDelegate> delegate;

- (instancetype)initWithBaseNavigationController:
                    (UINavigationController*)navigationController
                                         browser:(Browser*)browser
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_AUTOFILL_AND_PASSWORDS_COORDINATOR_SHOPPING_COORDINATOR_H_
