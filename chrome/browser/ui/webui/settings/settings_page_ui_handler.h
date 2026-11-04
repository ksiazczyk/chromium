// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Settings page UI handler base class
// summary: Declares the base class for settings page WebUI message handlers, requiring JavaScript lifecycle safety in subclasses.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_SETTINGS_SETTINGS_PAGE_UI_HANDLER_H_
#define CHROME_BROWSER_UI_WEBUI_SETTINGS_SETTINGS_PAGE_UI_HANDLER_H_

#include "content/public/browser/web_ui_message_handler.h"

namespace settings {

// The base class handler of Javascript messages of settings pages.
class SettingsPageUIHandler : public content::WebUIMessageHandler {
 public:
  SettingsPageUIHandler();

  SettingsPageUIHandler(const SettingsPageUIHandler&) = delete;
  SettingsPageUIHandler& operator=(const SettingsPageUIHandler&) = delete;

  ~SettingsPageUIHandler() override;

 private:
  // SettingsPageUIHandler subclasses must be JavaScript-lifecycle safe.
  void OnJavascriptAllowed() override = 0;
  void OnJavascriptDisallowed() override = 0;
};

}  // namespace settings

#endif  // CHROME_BROWSER_UI_WEBUI_SETTINGS_SETTINGS_PAGE_UI_HANDLER_H_
