// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: App shim termination observer interface
// summary: Declares an Objective-C observer that runs a callback when a running app shim application terminates.
// ---

#ifndef CHROME_BROWSER_WEB_APPLICATIONS_OS_INTEGRATION_MAC_APP_SHIM_TERMINATION_OBSERVER_H_
#define CHROME_BROWSER_WEB_APPLICATIONS_OS_INTEGRATION_MAC_APP_SHIM_TERMINATION_OBSERVER_H_

#import <Cocoa/Cocoa.h>

#include "base/functional/callback_forward.h"

// An AppShimTerminationObserver observes a NSRunningApplication for when it
// terminates. On termination, it will run the specified callback on the UI
// thread and release itself.
@interface AppShimTerminationObserver : NSObject

+ (void)startObservingForRunningApplication:(NSRunningApplication*)app
                               withCallback:(base::OnceClosure)callback;

- (instancetype)init NS_UNAVAILABLE;

@end

#endif  // CHROME_BROWSER_WEB_APPLICATIONS_OS_INTEGRATION_MAC_APP_SHIM_TERMINATION_OBSERVER_H_
