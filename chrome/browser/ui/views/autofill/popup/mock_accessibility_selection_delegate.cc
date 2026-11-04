// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock accessibility selection delegate implementation
// summary: Provides the constructor and destructor for the gmock MockAccessibilitySelectionDelegate used in popup tests.
// ---

#include "chrome/browser/ui/views/autofill/popup/mock_accessibility_selection_delegate.h"

namespace autofill {

MockAccessibilitySelectionDelegate::MockAccessibilitySelectionDelegate() =
    default;
MockAccessibilitySelectionDelegate::~MockAccessibilitySelectionDelegate() =
    default;

}  // namespace autofill
