// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Passwords in other apps consumer protocol
// summary: Declares a consumer protocol with a method to update instructions when the password auto-fill status changes.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORDS_IN_OTHER_APPS_PASSWORDS_IN_OTHER_APPS_CONSUMER_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORDS_IN_OTHER_APPS_PASSWORDS_IN_OTHER_APPS_CONSUMER_H_

// Sets the Password details for consumer.
@protocol PasswordsInOtherAppsConsumer

// Invoked when auto-fill status has changed.
- (void)updateInstructionsWithCurrentPasswordAutoFillStatus;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_PASSWORDS_IN_OTHER_APPS_PASSWORDS_IN_OTHER_APPS_CONSUMER_H_
