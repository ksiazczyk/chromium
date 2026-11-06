// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Assistive keyboard key enum and helpers
// summary: Declares the IOSOmniboxAssistiveKey metrics enum plus helpers that map assistive key strings and list the keys shown on the keyboard.
// ---

#ifndef IOS_CHROME_BROWSER_OMNIBOX_UI_KEYBOARD_ASSIST_OMNIBOX_ASSISTIVE_KEYBOARD_UTILS_H_
#define IOS_CHROME_BROWSER_OMNIBOX_UI_KEYBOARD_ASSIST_OMNIBOX_ASSISTIVE_KEYBOARD_UTILS_H_

#import <UIKit/UIKit.h>

// Enum for the assistive keyboard actions, for UMA metrics.
// These values are persisted to logs.
// LINT.IfChange(IOSOmniboxAssistiveKey)
enum class IOSOmniboxAssistiveKey {
  kAssistiveKeyColon = 0,
  kAssistiveKeyDash = 1,
  kAssistiveKeySlash = 2,
  kAssistiveKeyDotCom = 3,
  kMaxValue = kAssistiveKeyDotCom,
};
// LINT.ThenChange(/tools/metrics/histograms/metadata/ios/enums.xml:IOSOmniboxAssistiveKey)

// Converts an assistive key string to its corresponding enum value for metrics.
// `assistiveKey` must be one of the strings returned by `AssistiveKeys()`.
IOSOmniboxAssistiveKey AssistiveKeyStringToEnumValue(NSString* assistiveKey);

// Returns the list of assistive keys to be displayed on the keyboard.
NSArray<NSString*>* AssistiveKeys();

#endif  // IOS_CHROME_BROWSER_OMNIBOX_UI_KEYBOARD_ASSIST_OMNIBOX_ASSISTIVE_KEYBOARD_UTILS_H_
