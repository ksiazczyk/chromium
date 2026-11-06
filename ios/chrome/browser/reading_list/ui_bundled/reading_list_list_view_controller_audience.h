// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Reading List list view controller audience protocol
// summary: Declares a protocol for Reading List view controllers to notify an audience whether the collection has items.
// ---

#ifndef IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_VIEW_CONTROLLER_AUDIENCE_H_
#define IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_VIEW_CONTROLLER_AUDIENCE_H_

// Audience for the Reading List view controllers.
@protocol ReadingListListViewControllerAudience

// Whether the collection has items.
- (void)readingListHasItems:(BOOL)hasItems;

@end

#endif  // IOS_CHROME_BROWSER_READING_LIST_UI_BUNDLED_READING_LIST_LIST_VIEW_CONTROLLER_AUDIENCE_H_
