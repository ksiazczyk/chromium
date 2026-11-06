// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Table view multi line text edit item delegate
// summary: Declares the delegate protocol that handles editing and resizing of a multi-line text view item.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CELLS_TABLE_VIEW_MULTI_LINE_TEXT_EDIT_ITEM_DELEGATE_H_
#define IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CELLS_TABLE_VIEW_MULTI_LINE_TEXT_EDIT_ITEM_DELEGATE_H_

// Delegate that handles the editing of a table view text view item.
@protocol TableViewMultiLineTextEditItemDelegate <UITextViewDelegate>

// Resizes the height of the text view upon changes.
- (void)textViewItemDidChange:(TableViewMultiLineTextEditItem*)tableViewItem;

@end

#endif  // IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CELLS_TABLE_VIEW_MULTI_LINE_TEXT_EDIT_ITEM_DELEGATE_H_
