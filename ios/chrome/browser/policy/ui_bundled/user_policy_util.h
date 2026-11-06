// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring CanFetchUserPolicy
// summary: Declares CanFetchUserPolicy, which reports whether user policies can be fetched for the current authentication state.
// ---

#ifndef IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_USER_POLICY_UTIL_H_
#define IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_USER_POLICY_UTIL_H_

class AuthenticationService;
class PrefService;

// Returns true if user policies can be fetched.
bool CanFetchUserPolicy(AuthenticationService* authService,
                        PrefService* prefService);

#endif  // IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_USER_POLICY_UTIL_H_
