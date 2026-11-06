// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reading list list item updater typedef
// summary: Defines a block typedef taking a reading list list item as parameter and returning nothing, used to update list items.
// ---

#ifndef IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_ITEM_UPDATER_H_
#define IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_ITEM_UPDATER_H_

#import <Foundation/Foundation.h>

@protocol ReadingListListItem;

// Typedef for a block taking a ReadingListListItem as parameter and returning
// nothing.
typedef void (^ReadingListListItemUpdater)(id<ReadingListListItem> item);

#endif  // IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_ITEM_UPDATER_H_
