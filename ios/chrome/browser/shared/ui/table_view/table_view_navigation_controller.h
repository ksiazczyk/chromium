// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TableViewNavigationController class header
// summary: Declares a navigation controller that wraps a view controller in a UINavigationController with table view styling.
// ---

#ifndef IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_NAVIGATION_CONTROLLER_H_
#define IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_NAVIGATION_CONTROLLER_H_

#import <UIKit/UIKit.h>

// TableViewNavigationController encapsulates a UIViewController inside a
// UINavigationController with a styling used for TableViews.
@interface TableViewNavigationController : UINavigationController

- (instancetype)initWithTable:(UIViewController*)table
    NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithRootViewController:(UIViewController*)rootViewController
    NS_UNAVAILABLE;
- (instancetype)initWithNavigationBarClass:(Class)navigationBarClass
                              toolbarClass:(Class)toolbarClass NS_UNAVAILABLE;
- (instancetype)initWithNibName:(NSString*)nibNameOrNil
                         bundle:(NSBundle*)nibBundleOrNil NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder*)aDecoder NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_SHARED_UI_TABLE_VIEW_TABLE_VIEW_NAVIGATION_CONTROLLER_H_
