// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: History coordinator delegate protocol
// summary: Declares the HistoryCoordinatorDelegate protocol with methods to dismiss the history UI, optionally with a completion handler.
// ---

#ifndef IOS_CHROME_BROWSER_HISTORY_UI_BUNDLED_HISTORY_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_HISTORY_UI_BUNDLED_HISTORY_COORDINATOR_DELEGATE_H_

#import "base/ios/block_types.h"

// Delegate for HistoryCoordinator.
@protocol HistoryCoordinatorDelegate

// Called when the history should be dismissed.
// The completion handler block is called after the view controller has been
// dismissed.
- (void)closeHistoryWithCompletion:(ProceduralBlock)completion;

// Called when the history should be dismissed.
- (void)closeHistory;

@end

#endif  // IOS_CHROME_BROWSER_HISTORY_UI_BUNDLED_HISTORY_COORDINATOR_DELEGATE_H_
