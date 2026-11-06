// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TOS coordinator header
// summary: Declares TOSCoordinator, a ChromeCoordinator that presents the Terms of Service screen, along with its delegate protocol.
// ---

#ifndef IOS_CHROME_BROWSER_FIRST_RUN_TOS_COORDINATOR_TOS_COORDINATOR_H_
#define IOS_CHROME_BROWSER_FIRST_RUN_TOS_COORDINATOR_TOS_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@class TOSCoordinator;

@protocol TOSCoordinatorDelegate

- (void)TOSCoordinatorWantsToBeStopped:(TOSCoordinator*)coordinator;

@end

// Coordinator to present Terms of Service (ToS) screen.
@interface TOSCoordinator : ChromeCoordinator

@property(nonatomic, weak) id<TOSCoordinatorDelegate> delegate;

@end

#endif  // IOS_CHROME_BROWSER_FIRST_RUN_TOS_COORDINATOR_TOS_COORDINATOR_H_
