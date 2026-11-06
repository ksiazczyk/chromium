// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SetupDebugging class header
// summary: Declares a class method that sets up debug-only or simulator-only settings during app startup.
// ---

#ifndef IOS_CHROME_APP_STARTUP_SETUP_DEBUGGING_H_
#define IOS_CHROME_APP_STARTUP_SETUP_DEBUGGING_H_

#import <UIKit/UIKit.h>

@interface SetupDebugging : NSObject

// Set up any debug-only or simulator-only settings.
+ (void)setUpDebuggingOptions;

@end
#endif  // IOS_CHROME_APP_STARTUP_SETUP_DEBUGGING_H_
