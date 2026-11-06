// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google services settings consumer protocol
// summary: Declares the consumer protocol exposing the table view model, reload behavior, and managed info popover display for Google services settings.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_GOOGLE_SERVICES_UI_GOOGLE_SERVICES_SETTINGS_CONSUMER_H_
#define IOS_CHROME_BROWSER_SETTINGS_GOOGLE_SERVICES_UI_GOOGLE_SERVICES_SETTINGS_CONSUMER_H_

#import <UIKit/UIKit.h>

#import "ios/chrome/browser/shared/ui/table_view/table_view_model.h"

// Consumer protocol for Google services settings.
@protocol GoogleServicesSettingsConsumer <NSObject>

// Returns the table view model.
@property(nonatomic, strong, readonly)
    TableViewModel<TableViewItem*>* tableViewModel;

// Reloads the table view. Does nothing if the model is not loaded yet.
- (void)reload;

// Shows an info popover anchored on `buttonView` depending on the signed-in
// policy.
- (void)showManagedInfoPopoverOnButton:(UIButton*)buttonView
                 isForcedSigninEnabled:(BOOL)isForcedSigninEnabled;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_GOOGLE_SERVICES_UI_GOOGLE_SERVICES_SETTINGS_CONSUMER_H_
