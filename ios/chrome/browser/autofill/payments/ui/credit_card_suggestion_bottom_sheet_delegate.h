// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Credit card suggestion bottom sheet delegate protocol
// summary: Declares the delegate protocol for disabling the bottom sheet, refocusing the originating field, and reporting view appearance and primary button taps.
// ---

#ifndef IOS_CHROME_BROWSER_AUTOFILL_PAYMENTS_UI_CREDIT_CARD_SUGGESTION_BOTTOM_SHEET_DELEGATE_H_
#define IOS_CHROME_BROWSER_AUTOFILL_PAYMENTS_UI_CREDIT_CARD_SUGGESTION_BOTTOM_SHEET_DELEGATE_H_

#import <Foundation/Foundation.h>

#import "ios/chrome/browser/autofill/model/credit_card/credit_card_data.h"

// Delegate for the payments bottom sheet.
@protocol CreditCardSuggestionBottomSheetDelegate

// Request to disable the bottom sheet, potentially refocusing the field which
// originally triggered the bottom sheet after the bottom sheet has been
// disabled.
- (void)disableBottomSheetAndRefocus:(BOOL)refocus;

// Called when the view did appear.
- (void)paymentsBottomSheetViewDidAppear;

// Called when the user did tap on the primary action button.
- (void)didTapOnPrimaryButton;

@end

#endif  // IOS_CHROME_BROWSER_AUTOFILL_PAYMENTS_UI_CREDIT_CARD_SUGGESTION_BOTTOM_SHEET_DELEGATE_H_
