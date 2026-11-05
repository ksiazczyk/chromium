// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUI browser focus controller interface
// summary: Declares the WebUI implementation of BrowserFocusController with unimplemented focus and accessibility methods.
// ---

#ifndef CHROME_BROWSER_UI_FOCUS_BROWSER_FOCUS_CONTROLLER_WEBUI_H_
#define CHROME_BROWSER_UI_FOCUS_BROWSER_FOCUS_CONTROLLER_WEBUI_H_

#include "chrome/browser/ui/focus/browser_focus_controller.h"

class BrowserFocusControllerWebUI : public BrowserFocusController {
 public:
  BrowserFocusControllerWebUI(ui::BaseWindow* base_window,
                              ui::UnownedUserDataHost& host);
  ~BrowserFocusControllerWebUI() override;

  BrowserFocusControllerWebUI(const BrowserFocusControllerWebUI&) = delete;
  BrowserFocusControllerWebUI& operator=(const BrowserFocusControllerWebUI&) =
      delete;

  // BrowserFocusController:
  void FocusWebContentsPane() override;
  void FocusInactivePopupForAccessibility() override;
  bool ActivateFirstInactiveBubbleForAccessibility() override;
};

#endif  // CHROME_BROWSER_UI_FOCUS_BROWSER_FOCUS_CONTROLLER_WEBUI_H_
