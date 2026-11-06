// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MultiRowContainerView interface for multi-row layouts
// summary: Declares MultiRowContainerView, a UIView that arranges a given list of views into multiple rows.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_UI_CELLS_MULTI_ROW_CONTAINER_VIEW_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_UI_CELLS_MULTI_ROW_CONTAINER_VIEW_H_

#import <UIKit/UIKit.h>

// Container view intended to display multiple rows of elements.
@interface MultiRowContainerView : UIView

// Initializes and configures this view to contain each element in `views` in a
// row.
- (instancetype)initWithViews:(NSArray<UIView*>*)views;

@end

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_UI_CELLS_MULTI_ROW_CONTAINER_VIEW_H_
