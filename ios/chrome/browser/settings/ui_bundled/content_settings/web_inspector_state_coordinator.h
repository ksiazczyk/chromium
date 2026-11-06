// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Web Inspector state coordinator interface
// summary: Declares the coordinator that presents the settings screen allowing the user to enable Web Inspector support in Chrome for iOS.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_WEB_INSPECTOR_STATE_COORDINATOR_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_WEB_INSPECTOR_STATE_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

// Coordinator to display the screen allowing the user to enable Web Inspector
// support.
@interface WebInspectorStateCoordinator : ChromeCoordinator

- (instancetype)initWithBaseNavigationController:
                    (UINavigationController*)navigationController
                                         browser:(Browser*)browser
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CONTENT_SETTINGS_WEB_INSPECTOR_STATE_COORDINATOR_H_
