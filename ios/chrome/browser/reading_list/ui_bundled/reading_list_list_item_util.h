// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reading list list item utility functions
// summary: Declares helpers for building reading list cell accessibility labels and for comparing reading list list items for equality.
// ---

#ifndef IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_ITEM_UTIL_H_
#define IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_ITEM_UTIL_H_

#import <Foundation/Foundation.h>

@protocol ReadingListListItem;

// Returns the a11y label to use for a reading list cell with `title` and
// `subtitle`.
NSString* GetReadingListCellAccessibilityLabel(
    NSString* title,
    NSString* subtitle,
    BOOL showCloudSlashIcon);

// Returns whether `first` is equivalent to `second`.
BOOL AreReadingListListItemsEqual(id<ReadingListListItem> first,
                                  id<ReadingListListItem> second);

#endif  // IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_ITEM_UTIL_H_
