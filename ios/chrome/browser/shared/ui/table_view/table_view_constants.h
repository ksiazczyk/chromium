// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Table view shared constants
// summary: Declares shared table view constants, including empty view accessibility identifiers and the first header height used as padding.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_CONSTANTS_H_
#define IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_CONSTANTS_H_

#import <Foundation/Foundation.h>

extern NSString* const kTableViewIllustratedEmptyViewID;
extern NSString* const kTableViewEmptyViewID;

// Header height used as a padding between the first cell and the navigation
// bar.
extern const CGFloat kTableViewFirstHeaderHeight;

#endif  // IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_CONSTANTS_H_
