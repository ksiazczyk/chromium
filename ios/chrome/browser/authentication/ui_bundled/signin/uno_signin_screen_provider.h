// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UNO sign-in screen provider header
// summary: Declares UnoSigninScreenProvider, a ScreenProvider subclass that supplies the list of UNO sign-in screens.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_UNO_SIGNIN_SCREEN_PROVIDER_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_UNO_SIGNIN_SCREEN_PROVIDER_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/screen/ui_bundled/screen_provider.h"

// The class that provides a list of UNO sign-in screens.
@interface UnoSigninScreenProvider : ScreenProvider

- (instancetype)init NS_DESIGNATED_INITIALIZER;

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_UNO_SIGNIN_SCREEN_PROVIDER_H_
