// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FormDataPredictions implementation
// summary: Implements the constructors, assignment operators and destructor of the FormDataPredictions structure.
// ---

#include "components/autofill/core/common/form_data_predictions.h"

namespace autofill {

FormDataPredictions::FormDataPredictions() = default;

FormDataPredictions::FormDataPredictions(const FormDataPredictions&) = default;

FormDataPredictions& FormDataPredictions::operator=(
    const FormDataPredictions&) = default;

FormDataPredictions::FormDataPredictions(FormDataPredictions&&) = default;

FormDataPredictions& FormDataPredictions::operator=(FormDataPredictions&&) =
    default;

FormDataPredictions::~FormDataPredictions() = default;

}  // namespace autofill
