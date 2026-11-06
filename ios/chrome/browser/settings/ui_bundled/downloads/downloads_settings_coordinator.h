// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Downloads settings coordinator header
// summary: Declares the DownloadsSettingsCoordinator interface that presents the Downloads settings screen in iOS Chrome.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_DOWNLOADS_SETTINGS_COORDINATOR_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_DOWNLOADS_SETTINGS_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@protocol DownloadsSettingsCoordinatorDelegate;

// Coordinator for Downloads settings.
@interface DownloadsSettingsCoordinator : ChromeCoordinator

// Delegate.
@property(nonatomic, weak) id<DownloadsSettingsCoordinatorDelegate> delegate;

// Initialization.
- (instancetype)initWithBaseNavigationController:
                    (UINavigationController*)navigationController
                                         browser:(Browser*)browser
    NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_DOWNLOADS_DOWNLOADS_SETTINGS_COORDINATOR_H_
