// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome Apps browser API provider implementation
// summary: Registers the Chrome Apps generated extension functions with the browser's extension function registry.
// ---

#include "chrome/browser/apps/platform_apps/chrome_apps_browser_api_provider.h"

#include "chrome/browser/apps/platform_apps/api/generated_api_registration.h"

namespace chrome_apps {

ChromeAppsBrowserAPIProvider::ChromeAppsBrowserAPIProvider() = default;
ChromeAppsBrowserAPIProvider::~ChromeAppsBrowserAPIProvider() = default;

void ChromeAppsBrowserAPIProvider::RegisterExtensionFunctions(
    ExtensionFunctionRegistry* registry) {
  api::ChromeAppsGeneratedFunctionRegistry::RegisterAll(registry);
}

}  // namespace chrome_apps
