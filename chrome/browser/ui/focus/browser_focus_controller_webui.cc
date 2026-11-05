// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUI browser focus controller implementation
// summary: Provides the WebUI variant of the focus controller whose pane focus and accessibility methods are currently unimplemented stubs.
// ---

#include "chrome/browser/ui/focus/browser_focus_controller_webui.h"

#include "base/notimplemented.h"

BrowserFocusControllerWebUI::BrowserFocusControllerWebUI(
    ui::BaseWindow* base_window,
    ui::UnownedUserDataHost& host)
    : BrowserFocusController(base_window, host) {}

BrowserFocusControllerWebUI::~BrowserFocusControllerWebUI() = default;

void BrowserFocusControllerWebUI::FocusWebContentsPane() {
  NOTIMPLEMENTED_LOG_ONCE();
}

void BrowserFocusControllerWebUI::FocusInactivePopupForAccessibility() {
  NOTIMPLEMENTED_LOG_ONCE();
}

bool BrowserFocusControllerWebUI::
    ActivateFirstInactiveBubbleForAccessibility() {
  NOTIMPLEMENTED_LOG_ONCE();
  return false;
}
