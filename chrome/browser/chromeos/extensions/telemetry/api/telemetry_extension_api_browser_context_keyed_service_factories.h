// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Telemetry extension API keyed service factory builder header
// summary: Declares EnsureBrowserContextKeyedServiceFactoriesBuilt, which instantiates the telemetry extension API's keyed service factories.
// ---

#ifndef CHROME_BROWSER_CHROMEOS_EXTENSIONS_TELEMETRY_API_TELEMETRY_EXTENSION_API_BROWSER_CONTEXT_KEYED_SERVICE_FACTORIES_H_
#define CHROME_BROWSER_CHROMEOS_EXTENSIONS_TELEMETRY_API_TELEMETRY_EXTENSION_API_BROWSER_CONTEXT_KEYED_SERVICE_FACTORIES_H_

namespace chromeos {

void EnsureBrowserContextKeyedServiceFactoriesBuilt();

}  // namespace chromeos

#endif  // CHROME_BROWSER_CHROMEOS_EXTENSIONS_TELEMETRY_API_TELEMETRY_EXTENSION_API_BROWSER_CONTEXT_KEYED_SERVICE_FACTORIES_H_
