// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Button stack accessibility identifiers and margin constants
// summary: Declares accessibility identifier constants for the button stack buttons and scroll view plus the default margin constant.
// ---

#ifndef IOS_CHROME_COMMON_UI_BUTTON_STACK_BUTTON_STACK_CONSTANTS_H_
#define IOS_CHROME_COMMON_UI_BUTTON_STACK_BUTTON_STACK_CONSTANTS_H_

#import <Foundation/Foundation.h>

// Accessibility identifiers for the buttons and scroll view.
extern NSString* const kButtonStackPrimaryActionAccessibilityIdentifier;
extern NSString* const kButtonStackSecondaryActionAccessibilityIdentifier;
extern NSString* const kButtonStackTertiaryActionAccessibilityIdentifier;
extern NSString* const kButtonStackCheckmarkSymbolAccessibilityIdentifier;
extern NSString* const kButtonStackScrollViewAccessibilityIdentifier;

// Default margin for the button stack.
extern const CGFloat kButtonStackMargin;

#endif  // IOS_CHROME_COMMON_UI_BUTTON_STACK_BUTTON_STACK_CONSTANTS_H_
