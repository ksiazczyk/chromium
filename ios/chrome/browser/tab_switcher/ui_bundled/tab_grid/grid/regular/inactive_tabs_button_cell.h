// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: InactiveTabsButtonCell interface
// summary: Declares a collection view cell for the inactive tabs button exposing the inactivity threshold and inactive tab count.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_REGULAR_INACTIVE_TABS_BUTTON_CELL_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_REGULAR_INACTIVE_TABS_BUTTON_CELL_H_

#import <UIKit/UIKit.h>

// Cells representing the inactive tabs button.
@interface InactiveTabsButtonCell : UICollectionViewCell

// The threshold for a tab to be considered inactive.
@property(nonatomic, assign) NSInteger daysThreshold;

// The number of inactive tabs.
@property(nonatomic, assign) NSInteger count;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_REGULAR_INACTIVE_TABS_BUTTON_CELL_H_
