// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab grid page mutator protocol
// summary: Declares the protocol the tab grid mediator uses to learn which grid is selected and which page should become active with a given scroll behavior.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_PAGE_MUTATOR_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_PAGE_MUTATOR_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/tab_switcher/ui_bundled/tab_grid/tab_grid_paging.h"

// Allows the tab grid mediator to reflect user’s change in grid's model.
@protocol TabGridPageMutator <NSObject>

// Notifies the model that the user changed the grid. `selected` is set to YES
// if the grid is currently the one selected by the user.
- (void)currentlySelectedGrid:(BOOL)selected;

// Notifies the model that the current page is the active one with a desired
// scroll `behavior`.
- (void)setPageAsActiveWithBehavior:(TabGridScrollBehavior)behavior;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GRID_PAGE_MUTATOR_H_
