// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Manual fill all passwords coordinator delegate protocol
// summary: Declares the delegate protocol for dismissing the all-passwords coordinator and opening credential details in edit mode.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_MANUAL_FILL_COORDINATOR_MANUAL_FILL_ALL_PASSWORD_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_MANUAL_FILL_COORDINATOR_MANUAL_FILL_ALL_PASSWORD_COORDINATOR_DELEGATE_H_

@class ManualFillAllPasswordCoordinator;

@protocol ManualFillAllPasswordCoordinatorDelegate <NSObject>

// Resquests the delegate to dismiss the coordinator.
- (void)manualFillAllPasswordCoordinatorWantsToBeDismissed:
    (ManualFillAllPasswordCoordinator*)coordinator;

// Requests the delegate to open the details of a credential in edit mode.
- (void)manualFillAllPasswordCoordinator:
            (ManualFillAllPasswordCoordinator*)coordinator
    didTriggerOpenPasswordDetailsInEditMode:
        (password_manager::CredentialUIEntry)credential;

@end
#endif  // IOS_CHROME_BROWSER_AUTOFILL_MANUAL_FILL_COORDINATOR_MANUAL_FILL_ALL_PASSWORD_COORDINATOR_DELEGATE_H_
