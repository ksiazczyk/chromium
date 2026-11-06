// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group gradient view interface
// summary: Declares a vertical three-color gradient background view used by the tab group and create tab group view controllers.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_GRADIENT_VIEW_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_GRADIENT_VIEW_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/shared/ui/elements/gradient/multi_color_gradient_view.h"

// A gradient background used in the TabGroupViewController and
// CreateTabGroupViewController.
@interface TabGroupGradientView : MultiColorGradientView

// Returns a vertical gradient background of 3 colors.
- (instancetype)initWithColors:(NSArray*)colors;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_GRADIENT_VIEW_H_
