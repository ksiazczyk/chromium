// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock autofill popup controller implementation
// summary: Implements the mock autofill popup controller, defaulting GetSuggestionFilterMatches to return stored filter matches.
// ---

#include "chrome/browser/ui/autofill/mock_autofill_popup_controller.h"

#include "testing/gmock/include/gmock/gmock.h"

namespace autofill {

MockAutofillPopupController::MockAutofillPopupController() {
  ON_CALL(*this, GetSuggestionFilterMatches)
      .WillByDefault(::testing::ReturnRef(filter_matches_));
}

MockAutofillPopupController::~MockAutofillPopupController() = default;

}  // namespace autofill
