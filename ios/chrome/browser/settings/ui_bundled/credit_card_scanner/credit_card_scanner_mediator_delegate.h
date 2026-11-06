// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Credit card scanner mediator delegate protocol
// summary: Declares the delegate protocol notified when the credit card scanner finishes scanning a card.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_MEDIATOR_DELEGATE_H_
#define IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_MEDIATOR_DELEGATE_H_

@class CreditCardScannerMediator;

// This delegate is notified when a credit card is scanned.
@protocol CreditCardScannerMediatorDelegate

// Notifies that the scanner has finished scanning a credit card.
- (void)creditCardScannerMediatorDidFinishScan:
    (CreditCardScannerMediator*)mediator;

@end

#endif  // IOS_CHROME_BROWSER_SETTINGS_UI_BUNDLED_CREDIT_CARD_SCANNER_CREDIT_CARD_SCANNER_MEDIATOR_DELEGATE_H_
