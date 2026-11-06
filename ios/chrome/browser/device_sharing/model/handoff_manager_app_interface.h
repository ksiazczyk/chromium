// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Handoff manager app interface header
// summary: Declares the app interface used by handoff Earl Grey tests to read the current user activity web page URL from the handoff manager.
// ---

#ifndef IOS_CHROME_BROWSER_DEVICE_SHARING_MODEL_HANDOFF_MANAGER_APP_INTERFACE_H_
#define IOS_CHROME_BROWSER_DEVICE_SHARING_MODEL_HANDOFF_MANAGER_APP_INTERFACE_H_

#import <UIKit/UIKit.h>

// The app interface for handoff tests.
@interface HandoffManagerAppInterface : NSObject

// Current user activity web page url from the handoff manager.
+ (NSURL*)currentUserActivityWebPageURL;

@end

#endif  // IOS_CHROME_BROWSER_DEVICE_SHARING_MODEL_HANDOFF_MANAGER_APP_INTERFACE_H_
