// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockAutofillManager implementation
// summary: Implements MockAutofillManager, a reusable gmock of AutofillManager that defaults ReparseKnownForms to the base implementation.
// ---

#include "components/autofill/core/browser/foundations/mock_autofill_manager.h"

namespace autofill {

MockAutofillManager::MockAutofillManager(AutofillDriver* driver)
    : AutofillManager(driver) {
  ON_CALL(*this, ReparseKnownForms).WillByDefault([this] {
    AutofillManager::ReparseKnownForms();
  });
}

MockAutofillManager::~MockAutofillManager() = default;

base::WeakPtr<AutofillManager> MockAutofillManager::GetWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace autofill
