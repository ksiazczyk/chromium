// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock WebUI toolbar control delegate implementation
// summary: Implements the gmock-based mock delegate used in tests to stand in for a WebUI toolbar control delegate.
// ---

#include "chrome/browser/ui/views/toolbar/mock_webui_toolbar_control_delegate.h"

MockWebUIToolbarControlDelegate::MockWebUIToolbarControlDelegate()
    : icon_table_(this) {}
MockWebUIToolbarControlDelegate::~MockWebUIToolbarControlDelegate() = default;

const ui::ColorProvider* MockWebUIToolbarControlDelegate::GetColorProvider()
    const {
  return &color_provider_;
}

float MockWebUIToolbarControlDelegate::GetScaleFactor() const {
  return 1.0f;
}
