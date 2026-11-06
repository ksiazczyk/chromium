// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Best Features Screen Coordinator Header
// summary: Declares the ChromeCoordinator subclass that presents the Best Features Screen during first run.
// ---

#ifndef IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_COORDINATOR_BEST_FEATURES_SCREEN_COORDINATOR_H_
#define IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_COORDINATOR_BEST_FEATURES_SCREEN_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@protocol FirstRunScreenDelegate;

// Coordinator to present the Best Features Screen.
@interface BestFeaturesScreenCoordinator : ChromeCoordinator

// Initializes a BestFeaturesScreenCoordinator with `navigationController`,
// `browser`, and `delegate`.
- (instancetype)initWithBaseNavigationController:
                    (UINavigationController*)navigationController
                                         browser:(Browser*)browser
                                        delegate:
                                            (id<FirstRunScreenDelegate>)delegate
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_FIRST_RUN_BEST_FEATURES_COORDINATOR_BEST_FEATURES_SCREEN_COORDINATOR_H_
