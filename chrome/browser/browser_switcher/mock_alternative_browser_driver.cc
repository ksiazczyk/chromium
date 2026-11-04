// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock alternative browser driver implementation
// summary: Implements the mock alternative browser driver used to fake browser launching in BrowserSwitcher tests.
// ---

#include "chrome/browser/browser_switcher/mock_alternative_browser_driver.h"

#include "chrome/browser/browser_switcher/browser_switcher_prefs.h"

namespace browser_switcher {

MockAlternativeBrowserDriver::MockAlternativeBrowserDriver() = default;

MockAlternativeBrowserDriver::~MockAlternativeBrowserDriver() = default;

}  // namespace browser_switcher
