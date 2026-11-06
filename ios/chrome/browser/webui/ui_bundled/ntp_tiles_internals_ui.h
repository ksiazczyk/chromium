// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NTP tiles internals UI header
// summary: Declares the WebUI controller for the NTP tiles internals debugging page.
// ---

#ifndef IOS_CHROME_BROWSER_WEBUI_UI_BUNDLED_NTP_TILES_INTERNALS_UI_H_
#define IOS_CHROME_BROWSER_WEBUI_UI_BUNDLED_NTP_TILES_INTERNALS_UI_H_

#include <string>

#include "ios/web/public/webui/web_ui_ios_controller.h"

// The WebUI handler for chrome://ntp-tiles-internals.
class NTPTilesInternalsUI : public web::WebUIIOSController {
 public:
  explicit NTPTilesInternalsUI(web::WebUIIOS* web_ui, const std::string& host);

  NTPTilesInternalsUI(const NTPTilesInternalsUI&) = delete;
  NTPTilesInternalsUI& operator=(const NTPTilesInternalsUI&) = delete;

  ~NTPTilesInternalsUI() override;
};

#endif  // IOS_CHROME_BROWSER_WEBUI_UI_BUNDLED_NTP_TILES_INTERNALS_UI_H_
