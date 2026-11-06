// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Address edit profile coordinator interface
// summary: Declares the coordinator that presents the bottom sheet for editing an address during the save flow.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_AUTOFILL_EDIT_PROFILE_COORDINATOR_H_
#define IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_AUTOFILL_EDIT_PROFILE_COORDINATOR_H_

#import "ios/chrome/browser/shared/coordinator/chrome_coordinator/chrome_coordinator.h"

@protocol AutofillEditProfileHandler;

// Coordinator for showing the bottomsheet view for editing an address during
// the save flow.
@interface AutofillEditProfileCoordinator : ChromeCoordinator

- (instancetype)initWithBaseViewController:(UIViewController*)viewController
                                   browser:(Browser*)browser
                                   handler:
                                       (id<AutofillEditProfileHandler>)handler;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_UI_BUNDLED_ADDRESS_EDITOR_AUTOFILL_EDIT_PROFILE_COORDINATOR_H_
