// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Composebox menu header view interface
// summary: Declares a reusable collection view header containing a label for menu section titles.
// ---

#ifndef IOS_CHROME_BROWSER_COMPOSEBOX_MENU_UI_COMPOSEBOX_MENU_HEADER_VIEW_H_
#define IOS_CHROME_BROWSER_COMPOSEBOX_MENU_UI_COMPOSEBOX_MENU_HEADER_VIEW_H_

#import <UIKit/UIKit.h>

@interface ComposeboxMenuHeaderView : UICollectionReusableView
@property(nonatomic, readonly) UILabel* label;
@end

#endif  // IOS_CHROME_BROWSER_COMPOSEBOX_MENU_UI_COMPOSEBOX_MENU_HEADER_VIEW_H_
