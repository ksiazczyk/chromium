// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sign-in screen provider interface
// summary: Declares SigninScreenProvider, the class that supplies the list of forced sign-in screens.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_SIGNIN_SCREEN_PROVIDER_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_SIGNIN_SCREEN_PROVIDER_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/screen/ui_bundled/screen_provider.h"

// The class that provides a list of forced signin screens.
@interface SigninScreenProvider : ScreenProvider

- (instancetype)init NS_DESIGNATED_INITIALIZER;

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_SIGNIN_SCREEN_PROVIDER_H_
