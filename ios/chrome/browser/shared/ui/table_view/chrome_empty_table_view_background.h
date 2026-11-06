// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Protocol for empty table view background views
// summary: Declares the ChromeEmptyTableViewBackground protocol with scroll view content insets and an accessibility label for empty table view backgrounds.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CHROME_EMPTY_TABLE_VIEW_BACKGROUND_H_
#define IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CHROME_EMPTY_TABLE_VIEW_BACKGROUND_H_

// Protocol to which all ChromeTableViewController EmptyViews need to
// conform to
@protocol ChromeEmptyTableViewBackground

// Insets of the scroll view that contains all the subviews.
@property(nonatomic, assign) UIEdgeInsets scrollViewContentInsets;

// Accessibility label describing the whole EmptyView. Defaults to the entire
// text content of the view.
@property(nonatomic, copy) NSString* viewAccessibilityLabel;

@end

#endif  // IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_CHROME_EMPTY_TABLE_VIEW_BACKGROUND_H_
