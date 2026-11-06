// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock AutofillManagerObserver implementation
// summary: Implements the constructor and destructor of the mock observer used to track AutofillManager lifecycle and form events in tests.
// ---

#include "components/autofill/core/browser/foundations/mock_autofill_manager_observer.h"

namespace autofill {

MockAutofillManagerObserver::MockAutofillManagerObserver() = default;

MockAutofillManagerObserver::~MockAutofillManagerObserver() = default;

}  // namespace autofill
