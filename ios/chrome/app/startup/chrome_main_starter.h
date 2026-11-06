// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeMainStarter interface
// summary: Declares ChromeMainStarter, whose startChromeMain method performs the one-time setup needed by common Chrome code at app startup.
// ---

#ifndef IOS_CHROME_APP_STARTUP_CHROME_MAIN_STARTER_H_
#define IOS_CHROME_APP_STARTUP_CHROME_MAIN_STARTER_H_

#import <UIKit/UIKit.h>

#include <memory>

class IOSChromeMain;

@interface ChromeMainStarter : NSObject

// Setup and initialization that is needed by common Chrome code. This should be
// called only once during app startup (or shortly after launch). Returns the
// object that drives startup/shutdown logic.
+ (std::unique_ptr<IOSChromeMain>)startChromeMain;

@end
#endif  // IOS_CHROME_APP_STARTUP_CHROME_MAIN_STARTER_H_
