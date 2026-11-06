// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BnplStrategy base implementation
// summary: Implements the BnplStrategy interface with NOTREACHED default action getters that platform-specific strategies are expected to override.
// ---

#include "components/autofill/core/browser/payments/bnpl_strategy.h"

#include "base/notreached.h"
#include "components/autofill/core/browser/payments/payments_autofill_client.h"

namespace autofill::payments {

BnplStrategy::~BnplStrategy() = default;

BnplStrategy::SuggestionsShownNextAction
BnplStrategy::GetNextActionOnSuggestionsShown() {
  NOTREACHED();
}

BnplStrategy::UserDecisionToUseBnplNextAction
BnplStrategy::GetNextActionOnUserDecisionToUseBnpl() {
  NOTREACHED();
}

BnplStrategy::UserDecisionToUseBnplAgainNextAction
BnplStrategy::GetNextActionOnUserDecisionToUseBnplAgain() {
  NOTREACHED();
}

BnplStrategy::BnplAmountExtractionReturnedNextAction
BnplStrategy::GetNextActionOnAmountExtractionReturned() {
  NOTREACHED();
}

BnplStrategy::BeforeSwitchingViewAction
BnplStrategy::GetBeforeViewSwitchAction() {
  NOTREACHED();
}

BnplStrategy::BnplAiBasedAmountExtractionReturnedNextAction
BnplStrategy::GetNextActionOnAiBasedAmountExtractionReturned() {
  NOTREACHED();
}

BnplStrategy::UserDecisionToUseSavedCardsNextAction
BnplStrategy::GetNextActionOnUserDecisionToUseSavedCards() {
  NOTREACHED();
}

BnplStrategy::UiDismissalAction BnplStrategy::GetUiDismissalAction() {
  NOTREACHED();
}

bool BnplStrategy::ShouldRemoveExistingUiOnServerReturn(
    PaymentsAutofillClient::PaymentsRpcResult result) {
  NOTREACHED();
}

}  // namespace autofill::payments
