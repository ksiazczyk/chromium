// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: First-run sign-in logger header
// summary: Declares FirstRunSigninLogger, a UserSigninLogger subclass that logs metrics for Chrome first-run sign-in operations.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_LOGGING_FIRST_RUN_SIGNIN_LOGGER_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_LOGGING_FIRST_RUN_SIGNIN_LOGGER_H_

#import "ios/chrome/browser/authentication/ui_bundled/signin/logging/user_signin_logger.h"

// Logs metrics for Chrome first-run operations.
@interface FirstRunSigninLogger : UserSigninLogger

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNIN_LOGGING_FIRST_RUN_SIGNIN_LOGGER_H_
