// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock autofill annotations provider implementation
// summary: Provides the constructor and destructor for the gmock-based mock of AutofillAnnotationsProvider used in tests.
// ---

#include "components/optimization_guide/content/browser/mock_autofill_annotations_provider.h"

namespace optimization_guide {

MockAutofillAnnotationsProvider::MockAutofillAnnotationsProvider() = default;
MockAutofillAnnotationsProvider::~MockAutofillAnnotationsProvider() = default;

}  // namespace optimization_guide
