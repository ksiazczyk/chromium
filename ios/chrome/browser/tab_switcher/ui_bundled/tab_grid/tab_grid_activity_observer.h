// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab grid activity observer protocol
// summary: Declares a protocol to notify observers of the page containing the last active tab.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_ACTIVITY_OBSERVER_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_ACTIVITY_OBSERVER_H_

#import "ios/chrome/browser/tab_switcher/ui_bundled/tab_grid/tab_grid_paging.h"

// This delegate is used to notify any tab grid activity that might be relevant.
@protocol TabGridActivityObserver

// Notifies the receiver the page which contain the last active tab.
- (void)updateLastActiveTabPage:(TabGridPage)page;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_ACTIVITY_OBSERVER_H_
