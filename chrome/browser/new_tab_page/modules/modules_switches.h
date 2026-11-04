// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NTP modules switch declaration
// summary: Declares the command line switch that enables new tab page modules for signed-out users, mainly for perf tests that cannot sign in.
// ---

#ifndef CHROME_BROWSER_NEW_TAB_PAGE_MODULES_MODULES_SWITCHES_H_
#define CHROME_BROWSER_NEW_TAB_PAGE_MODULES_MODULES_SWITCHES_H_

namespace switches {

// Enables NTP modules on the signed out user experience. Used for perf tests,
// which do not support sign-in.
extern const char kSignedOutNtpModulesSwitch[];

}  // namespace switches

#endif  // CHROME_BROWSER_NEW_TAB_PAGE_MODULES_MODULES_SWITCHES_H_
