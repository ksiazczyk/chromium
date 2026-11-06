// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Unexpected mode toast utility interface
// summary: Declares a function that shows a snackbar when the user opens a URL in a mode that is currently unavailable, such as policy-disabled Incognito.
// ---

#ifndef IOS_CHROME_APP_UNEXPECTED_MODE_TOAST_UTIL_H_
#define IOS_CHROME_APP_UNEXPECTED_MODE_TOAST_UTIL_H_

#import "ios/chrome/app/app_startup_parameters.h"

@class SceneState;

// Shows a snackbar message to the user when they intended to open a URL in a
// mode that is currently unavailable (e.g. Incognito is disabled by policy).
void ShowToastWhenOpenInUnexpectedMode(
    SceneState* scene_state,
    ApplicationModeForTabOpening target_mode);

#endif  // IOS_CHROME_APP_UNEXPECTED_MODE_TOAST_UTIL_H_
