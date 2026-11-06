// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Idle timeout constants declarations
// summary: Declares accessibility identifiers for the idle timeout dialog and launch screen plus the snackbar duration constant.
// ---

#ifndef IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_IDLE_CONSTANTS_H_
#define IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_IDLE_CONSTANTS_H_

#import <Foundation/Foundation.h>

#import "base/time/time.h"

extern NSString* const kIdleTimeoutDialogAccessibilityIdentifier;
extern NSString* const kIdleTimeoutLaunchScreenAccessibilityIdentifier;
inline constexpr base::TimeDelta kIdleTimeoutSnackbarDuration =
    base::Seconds(7);
#endif  // IOS_CHROME_BROWSER_POLICY_UI_BUNDLED_IDLE_CONSTANTS_H_
