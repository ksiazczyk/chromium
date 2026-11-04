// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mac test helper for WebUI location bar interactive tests
// summary: Declares a macOS helper that sets a window's first responder without resigning the previous one, used by the interactive UI tests.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_LOCATION_BAR_WEBUI_LOCATION_BAR_INTERACTIVE_UITEST_MAC_H_
#define CHROME_BROWSER_UI_VIEWS_LOCATION_BAR_WEBUI_LOCATION_BAR_INTERACTIVE_UITEST_MAC_H_

#include "ui/gfx/native_ui_types.h"

namespace webui_location_bar_test {

// Makes `new_first_responder` the first responder of its window without calling
// -resignFirstResponder on the old first responder. This simulate a buggy
// behavior in mac fullscreen. Returns true if the operation is successful.
bool SetWindowFirstResponderWithoutResigning(
    gfx::NativeView new_first_responder);

}  // namespace webui_location_bar_test

#endif  // CHROME_BROWSER_UI_VIEWS_LOCATION_BAR_WEBUI_LOCATION_BAR_INTERACTIVE_UITEST_MAC_H_
