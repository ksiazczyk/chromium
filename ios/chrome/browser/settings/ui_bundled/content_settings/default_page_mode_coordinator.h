// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default page mode coordinator header
// summary: Declares the coordinator that presents the screen for choosing the default desktop or mobile page loading mode.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_COORDINATOR_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

// Coordinator to display the screen allowing the user to choose the default
// mode (Desktop/Mobile) for loading pages.
@interface DefaultPageModeCoordinator : ChromeCoordinator

- (instancetype)initWithBaseNavigationController:
                    (UINavigationController*)navigationController
                                         browser:(Browser*)browser
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_DEFAULT_PAGE_MODE_COORDINATOR_H_
