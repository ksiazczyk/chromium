// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome WebUI config registration header
// summary: Declares RegisterChromeWebUIConfigs, which adds Chrome's WebUI configs to the WebUIConfigMap.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_CHROME_WEB_UI_CONFIGS_H_
#define CHROME_BROWSER_UI_WEBUI_CHROME_WEB_UI_CONFIGS_H_

// Method that adds /chrome's `WebUIConfig`s to `WebUIConfigMap`.
void RegisterChromeWebUIConfigs();

#endif  // CHROME_BROWSER_UI_WEBUI_CHROME_WEB_UI_CONFIGS_H_
