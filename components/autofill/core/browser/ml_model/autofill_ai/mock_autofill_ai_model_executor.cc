// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Autofill AI model executor implementation
// summary: Implements the constructor, destructor and weak-pointer accessor of the MockAutofillAiModelExecutor test double.
// ---

#include "components/autofill/core/browser/ml_model/autofill_ai/mock_autofill_ai_model_executor.h"

namespace autofill {

MockAutofillAiModelExecutor::MockAutofillAiModelExecutor() = default;

MockAutofillAiModelExecutor::~MockAutofillAiModelExecutor() = default;

base::WeakPtr<AutofillAiModelExecutor>
MockAutofillAiModelExecutor::GetWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace autofill
