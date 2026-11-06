// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Incognito reauth utility header
// summary: Declares BiometricAuthenticationTypeString, which returns the name of the available biometric authentication type for the reauth UI.
// ---

#ifndef IOS_CHROME_BROWSER_INCOGNITO_REAUTH_UI_BUNDLED_INCOGNITO_REAUTH_UTIL_H_
#define IOS_CHROME_BROWSER_INCOGNITO_REAUTH_UI_BUNDLED_INCOGNITO_REAUTH_UTIL_H_

#import <Foundation/Foundation.h>

// A string defining the authentication type, e.g. "Face ID" or "Touch ID".
NSString* BiometricAuthenticationTypeString();

#endif  // IOS_CHROME_BROWSER_INCOGNITO_REAUTH_UI_BUNDLED_INCOGNITO_REAUTH_UTIL_H_
