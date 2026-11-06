// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Account picker screen constants header
// summary: Declares constants for the account picker screen, including the maximum bottom sheet height ratio and a navigation controller accessibility identifier.
// ---

#ifndef IOS_CHROME_BROWSER_ACCOUNT_PICKER_UI_BUNDLED_ACCOUNT_PICKER_SCREEN_ACCOUNT_PICKER_SCREEN_CONSTANTS_H_
#define IOS_CHROME_BROWSER_ACCOUNT_PICKER_UI_BUNDLED_ACCOUNT_PICKER_SCREEN_ACCOUNT_PICKER_SCREEN_CONSTANTS_H_

#import <UIKit/UIKit.h>

// Maximum height ratio for the bottom sheet container view.
extern const CGFloat kMaxPickAccountHeightRatioWithWindow;

// AccountPickerScreenNavigationController accessibility identifier.
extern NSString* const
    kAccountPickerScreenNavigationControllerAccessibilityIdentifier;

#endif  // IOS_CHROME_BROWSER_ACCOUNT_PICKER_UI_BUNDLED_ACCOUNT_PICKER_SCREEN_ACCOUNT_PICKER_SCREEN_CONSTANTS_H_
