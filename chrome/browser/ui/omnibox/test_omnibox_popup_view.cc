// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestOmniboxPopupView fake implementation
// summary: Minimal fake OmniboxPopupView implementation that reports the popup as closed for use in tests.
// ---

#include "chrome/browser/ui/omnibox/test_omnibox_popup_view.h"

bool TestOmniboxPopupView::IsOpen() const {
  return false;
}

bool TestOmniboxPopupView::IsSelectionPopupControlled() const {
  return false;
}
