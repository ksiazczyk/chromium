// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab strip group cell data source protocol
// summary: Objective-C protocol for querying tab strip group cell properties, returning the face pile provider for a given item identifier.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_TAB_STRIP_UI_TAB_STRIP_GROUP_CELL_DATA_SOURCE_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_TAB_STRIP_UI_TAB_STRIP_GROUP_CELL_DATA_SOURCE_H_

#import <UIKit/UIKit.h>

@protocol FacePileProviding;
@class TabStripItemIdentifier;

// Protocol for querying properties related to a `TabStripTabGroupCell`.
@protocol TabStripTabGroupCellDataSource

// Returns the facePile view associated with the item.
- (id<FacePileProviding>)facePileProviderForItem:
    (TabStripItemIdentifier*)itemIdentifier;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_TAB_STRIP_UI_TAB_STRIP_GROUP_CELL_DATA_SOURCE_H_
