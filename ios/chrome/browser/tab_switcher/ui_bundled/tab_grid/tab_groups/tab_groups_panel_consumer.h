// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab groups panel consumer protocol
// summary: Declares the protocol the tab group sync model uses to send items and updates to the Tab Groups panel UI.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUPS_PANEL_CONSUMER_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUPS_PANEL_CONSUMER_H_

#import <Foundation/Foundation.h>

@class TabGroupsPanelItem;

// Consumer to allow the Tab Group Sync model to send information to the tab
// groups panel UI.
@protocol TabGroupsPanelConsumer

// Replace the Tab Groups panel's items with the given items.
- (void)populateOutOfDateMessageItem:(TabGroupsPanelItem*)outOfDateMessageItem
                    notificationItem:(TabGroupsPanelItem*)notificationItem
                       tabGroupItems:
                           (NSArray<TabGroupsPanelItem*>*)tabGroupItems;

// Reconfigures the given Tab Groups panel's item.
- (void)reconfigureItem:(TabGroupsPanelItem*)item;

// Dismisses any modal UI which may be presented.
- (void)dismissModals;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_TAB_GROUPS_TAB_GROUPS_PANEL_CONSUMER_H_
