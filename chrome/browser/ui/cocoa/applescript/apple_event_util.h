// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Apple Event utility declarations
// summary: Declares helpers that convert base::Value to NSAppleEventDescriptor and check whether JavaScript in Apple Events is enabled for a profile.
// ---

#ifndef CHROME_BROWSER_UI_COCOA_APPLESCRIPT_APPLE_EVENT_UTIL_H_
#define CHROME_BROWSER_UI_COCOA_APPLESCRIPT_APPLE_EVENT_UTIL_H_

#import <Foundation/Foundation.h>

namespace base {
class Value;
}

class Profile;

namespace chrome::mac {

NSAppleEventDescriptor* ValueToAppleEventDescriptor(const base::Value& value);

// Returns true if Javascript in Apple Events is enabled for |profile|.
bool IsJavaScriptEnabledForProfile(Profile* profile);

}  // namespace chrome::mac

#endif  // CHROME_BROWSER_UI_COCOA_APPLESCRIPT_APPLE_EVENT_UTIL_H_
