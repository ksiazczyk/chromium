// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock single field fill router implementation
// summary: Implements the constructor and destructor of MockSingleFieldFillRouter, a test double that derives from SingleFieldFillRouter for autofill unit tests.
// ---

#include "components/autofill/core/browser/single_field_fillers/mock_single_field_fill_router.h"

namespace autofill {

MockSingleFieldFillRouter::MockSingleFieldFillRouter(
    AutocompleteHistoryManager* autocomplete_history_manager,
    IbanManager* iban_manager,
    MerchantPromoCodeManager* merchant_promo_code_manager)
    : SingleFieldFillRouter(autocomplete_history_manager,
                            iban_manager,
                            merchant_promo_code_manager) {}

MockSingleFieldFillRouter::~MockSingleFieldFillRouter() = default;

}  // namespace autofill
