// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Consistency account chooser view controller interface
// summary: Declares the view controller for the consistency sign-in account chooser coordinator, exposing action, model, and layout delegates.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_CONSISTENCY_PROMO_SIGNIN_CONSISTENCY_ACCOUNT_CHOOSER_CONSISTENCY_ACCOUNT_CHOOSER_VIEW_CONTROLLER_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_CONSISTENCY_PROMO_SIGNIN_CONSISTENCY_ACCOUNT_CHOOSER_CONSISTENCY_ACCOUNT_CHOOSER_VIEW_CONTROLLER_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/authentication/ui_bundled/signin/consistency_promo_signin/consistency_sheet/child_consistency_sheet_view_controller.h"

@protocol ConsistencyAccountChooserTableViewControllerActionDelegate;
@protocol ConsistencyAccountChooserTableViewControllerModelDelegate;
@protocol ConsistencyAccountChooserConsumer;
@protocol ConsistencyLayoutDelegate;

// View controller for ConsistencyAccountChooserCoordinator.
@interface ConsistencyAccountChooserViewController
    : UIViewController <ChildConsistencySheetViewController>

@property(nonatomic, weak)
    id<ConsistencyAccountChooserTableViewControllerActionDelegate>
        actionDelegate;
@property(nonatomic, weak) id<ConsistencyLayoutDelegate> layoutDelegate;
@property(nonatomic, weak)
    id<ConsistencyAccountChooserTableViewControllerModelDelegate>
        modelDelegate;
@property(nonatomic, strong, readonly) id<ConsistencyAccountChooserConsumer>
    consumer;

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_CONSISTENCY_PROMO_SIGNIN_CONSISTENCY_ACCOUNT_CHOOSER_CONSISTENCY_ACCOUNT_CHOOSER_VIEW_CONTROLLER_H_
