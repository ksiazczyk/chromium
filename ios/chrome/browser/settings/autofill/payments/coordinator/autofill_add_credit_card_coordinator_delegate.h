// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill add credit card coordinator delegate protocol
// summary: Defines the delegate protocol used to request that the add credit card coordinator be stopped.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_PAYMENTS_COORDINATOR_AUTOFILL_ADD_CREDIT_CARD_COORDINATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_PAYMENTS_COORDINATOR_AUTOFILL_ADD_CREDIT_CARD_COORDINATOR_DELEGATE_H_

@class AutofillAddCreditCardCoordinator;

// Delegate for the autofill add creditc card coordinator.
@protocol AutofillAddCreditCardCoordinatorDelegate <NSObject>

// Requests the delegate to stop the `coordinator`
- (void)autofillAddCreditCardCoordinatorWantsToBeStopped:
    (AutofillAddCreditCardCoordinator*)coordinator;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_PAYMENTS_COORDINATOR_AUTOFILL_ADD_CREDIT_CARD_COORDINATOR_DELEGATE_H_
