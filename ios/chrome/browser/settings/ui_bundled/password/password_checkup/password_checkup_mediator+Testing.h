// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PasswordCheckupMediator testing category header
// summary: Objective-C category exposing private PasswordCheckupMediator methods, such as the formatted time since the last completed check, for use in tests.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_CHECKUP_PASSWORD_CHECKUP_MEDIATOR_TESTING_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_CHECKUP_PASSWORD_CHECKUP_MEDIATOR_TESTING_H_

#import "ios/chrome/browser/settings/ui_bundled/password/password_checkup/password_checkup_mediator.h"

// Testing category to expose private methods in PasswordCheckupMediator
// for tests.
@interface PasswordCheckupMediator (Testing)

// Returns string containing the timestamp of the `last_completed_check`
- (NSString*)formattedElapsedTimeSinceLastCheck;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORD_CHECKUP_PASSWORD_CHECKUP_MEDIATOR_TESTING_H_
