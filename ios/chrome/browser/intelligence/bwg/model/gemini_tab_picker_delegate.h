// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gemini tab picker delegate protocol
// summary: Declares the Objective-C delegate protocol for opening the tab picker from the Gemini UI.
// ---

#ifndef IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_TAB_PICKER_DELEGATE_H_
#define IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_TAB_PICKER_DELEGATE_H_

#import <UIKit/UIKit.h>

// Delegate for Gemini tab picker actions.
@protocol GeminiTabPickerDelegate <NSObject>

// Opens tab picker to select tabs.
- (void)openTabPickerFromViewController:
    (UIViewController*)presentingViewController;

@end

#endif  // IOS_CHROME_BROWSER_INTELLIGENCE_BWG_MODEL_GEMINI_TAB_PICKER_DELEGATE_H_
