// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome untrusted WebUI config registration header
// summary: Declares RegisterChromeUntrustedWebUIConfigs, which adds Chrome's untrusted WebUI configs to the WebUIConfigMap.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_CHROME_UNTRUSTED_WEB_UI_CONFIGS_H_
#define CHROME_BROWSER_UI_WEBUI_CHROME_UNTRUSTED_WEB_UI_CONFIGS_H_

// Method that adds /chrome's untrusted `WebUIConfig`s to `WebUIConfigMap`.
void RegisterChromeUntrustedWebUIConfigs();

#endif  // CHROME_BROWSER_UI_WEBUI_CHROME_UNTRUSTED_WEB_UI_CONFIGS_H_
