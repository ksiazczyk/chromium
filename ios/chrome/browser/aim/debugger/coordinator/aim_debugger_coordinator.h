// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AimDebuggerCoordinator header
// summary: Declares the AimDebuggerCoordinator class and its presenter protocol for dismissing the AIM debugger.
// ---

#ifndef IOS_CHROME_BROWSER_AIM_DEBUGGER_COORDINATOR_AIM_DEBUGGER_COORDINATOR_H_
#define IOS_CHROME_BROWSER_AIM_DEBUGGER_COORDINATOR_AIM_DEBUGGER_COORDINATOR_H_

#import "base/ios/block_types.h"
#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@protocol AimDebuggerPresenter

/// Dismisses the debugger.
- (void)dismissAimDebuggerWithAnimation:(BOOL)animated;

@end

@interface AimDebuggerCoordinator : ChromeCoordinator

@property(nonatomic, weak) id<AimDebuggerPresenter> presenter;

// Stop with animation.
- (void)stopAnimatedWithCompletion:(ProceduralBlock)completion;

@end

#endif  // IOS_CHROME_BROWSER_AIM_DEBUGGER_COORDINATOR_AIM_DEBUGGER_COORDINATOR_H_
