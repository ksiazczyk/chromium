// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab group header edition delegate protocol
// summary: Delegate protocol that notifies when a tab group header's title is tapped, for editing the group.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_EDITION_DELEGATE_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_EDITION_DELEGATE_H_

@class TabGroupHeader;

// Delegate protocol for the TabGroupHeader.
@protocol TabGroupHeaderDelegate <NSObject>

// Called when the tabGroupGeader's title is tapped.
- (void)tabGroupHeaderDidTapTitle:(TabGroupHeader*)tabGroupHeader;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUP_EDITION_DELEGATE_H_
