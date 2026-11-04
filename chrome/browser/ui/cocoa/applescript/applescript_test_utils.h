// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FakeScriptCommand test helper
// summary: Declares FakeScriptCommand, an NSScriptCommand subclass used to emulate an actively running script during tests.
// ---

#ifndef CHROME_BROWSER_UI_COCOA_APPLESCRIPT_APPLESCRIPT_TEST_UTILS_H_
#define CHROME_BROWSER_UI_COCOA_APPLESCRIPT_APPLESCRIPT_TEST_UTILS_H_

#import <Foundation/Foundation.h>

// Used to emulate an active running script, useful for testing purposes.
@interface FakeScriptCommand : NSScriptCommand
@end

#endif  // CHROME_BROWSER_UI_COCOA_APPLESCRIPT_APPLESCRIPT_TEST_UTILS_H_
