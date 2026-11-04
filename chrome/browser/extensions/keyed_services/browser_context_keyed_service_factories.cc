// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EnsureBrowserContextKeyedServiceFactoriesBuilt implementation
// summary: Implements EnsureBrowserContextKeyedServiceFactoriesBuilt, which builds the Chrome and API extension keyed service factories.
// ---

#include "chrome/browser/extensions/keyed_services/browser_context_keyed_service_factories.h"

#include "chrome/browser/extensions/api/api_browser_context_keyed_service_factories.h"
#include "chrome/browser/extensions/keyed_services/chrome_browser_context_keyed_service_factories.h"

namespace chrome_extensions {

void EnsureBrowserContextKeyedServiceFactoriesBuilt() {
  EnsureChromeBrowserContextKeyedServiceFactoriesBuilt();
  EnsureApiBrowserContextKeyedServiceFactoriesBuilt();
}

}  // namespace chrome_extensions
