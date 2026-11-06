// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabGroupHeader interface
// summary: Declares a collection view header that displays a tab group's title and color and forwards interactions to a delegate.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_TAB_GROUP_HEADER_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_TAB_GROUP_HEADER_H_

#import <UIKit/UIKit.h>

@protocol TabGroupHeaderDelegate;

// A collection view header displaying tab group information.
@interface TabGroupHeader : UICollectionReusableView

// Group's title.
@property(nonatomic, copy) NSString* title;
// Group's color.
@property(nonatomic, copy) UIColor* color;
// Delegate to display the edition view.
@property(nonatomic, weak) id<TabGroupHeaderDelegate> tabGroupHeaderDelegate;

@end

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_TAB_GROUP_HEADER_H_
