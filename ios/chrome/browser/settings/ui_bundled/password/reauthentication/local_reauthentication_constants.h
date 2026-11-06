// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Local reauthentication constants header
// summary: Declares the histogram name and accessibility identifier constants used by the password manager reauthentication UI.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_REAUTHENTICATION_LOCAL_REAUTHENTICATION_CONSTANTS_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_REAUTHENTICATION_LOCAL_REAUTHENTICATION_CONSTANTS_H_

#import <Foundation/Foundation.h>

namespace password_manager {
// Name of histogram tracking events in the password manager reauthentication
// UI.
extern const char kReauthenticationUIEventHistogram[];

// Accessibility for LocalReauthenticationViewController.
extern NSString* const kReauthenticationViewControllerAccessibilityIdentifier;

}  // namespace password_manager

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_PASSWORD_REAUTHENTICATION_LOCAL_REAUTHENTICATION_CONSTANTS_H_
