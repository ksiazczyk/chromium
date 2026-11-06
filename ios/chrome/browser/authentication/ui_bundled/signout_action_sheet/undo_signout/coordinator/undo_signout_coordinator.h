// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Undo sign-out coordinator header
// summary: Declares the UndoSignoutCoordinator interface and its delegate protocol for handling the undo sign-out action for a given identity.
// ---

#ifndef IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNOUT_ACTION_SHEET_UNDO_SIGNOUT_COORDINATOR_UNDO_SIGNOUT_COORDINATOR_H_
#define IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNOUT_ACTION_SHEET_UNDO_SIGNOUT_COORDINATOR_UNDO_SIGNOUT_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@class UndoSignoutCoordinator;
@protocol SystemIdentity;

// Delegate protocol for UndoSignoutCoordinator.
@protocol UndoSignoutCoordinatorDelegate <NSObject>

// Called when the undo sign-out flow is completed or cancelled.
- (void)undoSignoutCoordinatorDidFinish:(UndoSignoutCoordinator*)coordinator;

@end

// Handles undo sign-out action for `identity`.
@interface UndoSignoutCoordinator : ChromeCoordinator

@property(nonatomic, weak) id<UndoSignoutCoordinatorDelegate> delegate;

- (instancetype)initWithBrowser:(Browser*)browser
                       identity:(id<SystemIdentity>)identity
       presentingViewController:(UIViewController*)presentingViewController
    NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser NS_UNAVAILABLE;

@end

#endif  // IOS_CHROME_BROWSER_AUTHENTICATION_UI_BUNDLED_SIGNOUT_ACTION_SHEET_UNDO_SIGNOUT_COORDINATOR_UNDO_SIGNOUT_COORDINATOR_H_
