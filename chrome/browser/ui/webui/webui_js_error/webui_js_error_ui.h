// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebUI JS error page controller header
// summary: Declares the WebUIJsErrorUI controller class and its internal WebUI config that registers the JavaScript error debugging page with the browser.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_WEBUI_JS_ERROR_WEBUI_JS_ERROR_UI_H_
#define CHROME_BROWSER_UI_WEBUI_WEBUI_JS_ERROR_WEBUI_JS_ERROR_UI_H_

#include "chrome/common/webui_url_constants.h"
#include "content/public/browser/internal_webui_config.h"
#include "content/public/browser/web_ui_controller.h"

class WebUIJsErrorUI;

class WebUIJsErrorUIConfig
    : public content::DefaultInternalWebUIConfig<WebUIJsErrorUI> {
 public:
  WebUIJsErrorUIConfig()
      : DefaultInternalWebUIConfig(chrome::kChromeUIWebUIJsErrorHost) {}
};

// The WebUI that controls chrome://webuijserror.
class WebUIJsErrorUI : public content::WebUIController {
 public:
  explicit WebUIJsErrorUI(content::WebUI* web_ui);
  ~WebUIJsErrorUI() override;
  WebUIJsErrorUI(const WebUIJsErrorUI&) = delete;
  WebUIJsErrorUI& operator=(const WebUIJsErrorUI&) = delete;

 private:
  WEB_UI_CONTROLLER_TYPE_DECL();
};

#endif  // CHROME_BROWSER_UI_WEBUI_WEBUI_JS_ERROR_WEBUI_JS_ERROR_UI_H_
