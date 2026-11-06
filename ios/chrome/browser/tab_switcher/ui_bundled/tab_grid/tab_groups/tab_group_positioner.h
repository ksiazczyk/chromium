// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group positioner protocol
// summary: Declares a protocol that provides the view above which the tab group view should be positioned.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_POSITIONER_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_POSITIONER_H_

// Protocol used to position the tab group view.
@protocol TabGroupPositioner

// Returns the view below which the tab group should positioned below.
- (UIView*)viewAboveTabGroup;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_POSITIONER_H_
