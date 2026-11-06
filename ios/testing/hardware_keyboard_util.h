// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Hardware keyboard event simulation header
// summary: Declares SimulatePhysicalKeyboardEvent, a test helper that simulates physical keyboard events with modifier flags and key input for testing iOS keyboard shortcuts.
// ---

#ifndef IOS_TESTING_HARDWARE_KEYBOARD_UTIL_H_
#define IOS_TESTING_HARDWARE_KEYBOARD_UTIL_H_

#import <UIKit/UIKit.h>

namespace chrome_test_util {

// Simulates a physical keyboard event.
// The input is similar to UIKeyCommand parameters, and is designed for testing
// keyboard shortcuts.
// Accepts any strings and also UIKeyInput{Up|Down|Left|Right}Arrow and
// UIKeyInputEscape constants as |input|.
void SimulatePhysicalKeyboardEvent(UIKeyModifierFlags flags, NSString* input);

}  //  namespace chrome_test_util

#endif  // IOS_TESTING_HARDWARE_KEYBOARD_UTIL_H_
