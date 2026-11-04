// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS telemetry extensions browser API provider implementation
// summary: Implements the provider by registering all generated ChromeOS system extension API functions with the extension function registry.
// ---

#include "chrome/browser/chromeos/extensions/telemetry/chromeos_telemetry_extensions_browser_api_provider.h"

#include "chrome/browser/chromeos/extensions/telemetry/api/generated_api_registration.h"
#include "extensions/browser/extension_function_registry.h"

namespace chromeos {

ChromeOSTelemetryExtensionsBrowserAPIProvider::
    ChromeOSTelemetryExtensionsBrowserAPIProvider() = default;
ChromeOSTelemetryExtensionsBrowserAPIProvider::
    ~ChromeOSTelemetryExtensionsBrowserAPIProvider() = default;

void ChromeOSTelemetryExtensionsBrowserAPIProvider::RegisterExtensionFunctions(
    ExtensionFunctionRegistry* registry) {
  api::ChromeOSSystemExtensionsGeneratedFunctionRegistry::RegisterAll(registry);
}

}  // namespace chromeos
