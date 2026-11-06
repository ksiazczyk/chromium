// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: History coordinator factory declaration
// summary: Declares CreateHistoryCoordinator, which initializes and returns a HistoryCoordinator for a given view controller and browser.
// ---

#ifndef IOS_CHROME_BROWSER_HISTORY_UI_BUNDLED_HISTORY_COORDINATOR_FACTORY_H_
#define IOS_CHROME_BROWSER_HISTORY_UI_BUNDLED_HISTORY_COORDINATOR_FACTORY_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/history/ui_bundled/history_coordinator.h"

class Browser;

// Initializes and returns the implementation of HistoryCoordinator.
HistoryCoordinator* CreateHistoryCoordinator(UIViewController* view_controller,
                                             Browser* browser);

#endif  // IOS_CHROME_BROWSER_HISTORY_UI_BUNDLED_HISTORY_COORDINATOR_FACTORY_H_
