// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Signin promo catalog view controller header
// summary: Declares a view controller that showcases the Signin Promo View, initialized with a Browser instance.
// ---

#ifndef IOS_CHROME_BROWSER_CATALOGS_UI_DETAILS_VIEW_CONTROLLERS_SIGNIN_PROMO_CATALOG_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_CATALOGS_UI_DETAILS_VIEW_CONTROLLERS_SIGNIN_PROMO_CATALOG_VIEW_CONTROLLER_H_

#import <UIKit/UIKit.h>

class Browser;

// View controller to showcase the Signin Promo View.
@interface SigninPromoCatalogViewController
    : UIViewController <UIAdaptivePresentationControllerDelegate>

- (instancetype)initWithBrowser:(Browser*)browser NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder*)coder NS_UNAVAILABLE;
- (instancetype)initWithNibName:(NSString*)nibNameOrNil
                         bundle:(NSBundle*)nibBundleOrNil NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_CATALOGS_UI_DETAILS_VIEW_CONTROLLERS_SIGNIN_PROMO_CATALOG_VIEW_CONTROLLER_H_
