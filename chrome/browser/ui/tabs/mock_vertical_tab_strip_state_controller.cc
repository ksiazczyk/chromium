// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock vertical tab strip state controller implementation
// summary: Implements the test mock of VerticalTabStripStateController, constructing it from a browser window interface for use in tab strip tests.
// ---

#include "chrome/browser/ui/tabs/mock_vertical_tab_strip_state_controller.h"

namespace tabs::test {

MockVerticalTabStripStateController::MockVerticalTabStripStateController(
    BrowserWindowInterface& browser)
    : VerticalTabStripStateController(browser) {}
MockVerticalTabStripStateController::~MockVerticalTabStripStateController() =
    default;

}  // namespace tabs::test
