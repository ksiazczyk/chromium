// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page info last visited coordinator interface
// summary: Declares a history-based coordinator that pushes a last visited view for a host onto the page info navigation stack.
// ---

#ifndef IOS_CHROME_BROWSER_PAGE_INFO_COORDINATOR_PAGE_INFO_LAST_VISITED_COORDINATOR_H_
#define IOS_CHROME_BROWSER_PAGE_INFO_COORDINATOR_PAGE_INFO_LAST_VISITED_COORDINATOR_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/history/ui_bundled/base_history_coordinator.h"
#import "ios/chrome/browser/url_loading/model/url_loading_params.h"

enum class UrlLoadStrategy;

@protocol HistoryCoordinatorDelegate;

// Coordinator that presents History.
@interface PageInfoLastVisitedCoordinator : BaseHistoryCoordinator

// Creates a PageInfoLastVisitedCoordinator and lets it push its view to the
// `navigationController`.
- (instancetype)initWithBaseNavigationController:
                    (UINavigationController*)navigationController
                                         browser:(Browser*)browser
                                        hostName:(NSString*)hostName
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_PAGE_INFO_COORDINATOR_PAGE_INFO_LAST_VISITED_COORDINATOR_H_
