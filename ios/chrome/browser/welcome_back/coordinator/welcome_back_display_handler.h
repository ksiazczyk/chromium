// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Welcome Back display handler header
// summary: Declares the handler the Promos Manager calls to show the Welcome Back promo to users returning after more than 28 days away.
// ---

#ifndef IOS_CHROME_BROWSER_WELCOME_BACK_COORDINATOR_WELCOME_BACK_DISPLAY_HANDLER_H_
#define IOS_CHROME_BROWSER_WELCOME_BACK_COORDINATOR_WELCOME_BACK_DISPLAY_HANDLER_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/promos_manager/coordinator/standard_promo_display_handler.h"

// Handler for displaying the Welcome Back promo.
//
// This handler is called by the Promos Manager and presents the Welcome Back
// promo to eligible users. Users are considered eligible if they return
// to the app after being away for >28 days.
@interface WelcomeBackDisplayHandler : NSObject <StandardPromoDisplayHandler>

#pragma mark - PromoProtocol

// `PromosManagerCommands` handler.
@property(nonatomic, weak) id<PromosManagerCommands> handler;

@end

#endif  // IOS_CHROME_BROWSER_WELCOME_BACK_COORDINATOR_WELCOME_BACK_DISPLAY_HANDLER_H_
