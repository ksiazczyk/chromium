// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bookmark table cell title edit delegate protocol
// summary: Declares the BookmarkTableCellTitleEditDelegate protocol that is notified when a bookmark cell's title text changes.
// ---

#ifndef IOS_CHROME_BROWSER_BOOKMARKS_UI_BUNDLED_CELLS_BOOKMARK_TABLE_CELL_TITLE_EDIT_DELEGATE_H_
#define IOS_CHROME_BROWSER_BOOKMARKS_UI_BUNDLED_CELLS_BOOKMARK_TABLE_CELL_TITLE_EDIT_DELEGATE_H_

// Delegates the cell's text field's event.
@protocol BookmarkTableCellTitleEditDelegate

// Called when the `titleText` of the cell was changed.
- (void)textDidChangeTo:(NSString*)newName;

@end

#endif  // IOS_CHROME_BROWSER_BOOKMARKS_UI_BUNDLED_CELLS_BOOKMARK_TABLE_CELL_TITLE_EDIT_DELEGATE_H_
