// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Controlled Frame extensions browser API provider implementation
// summary: Registers the generated Controlled Frame internal API functions with the extension function registry.
// ---

#include "chrome/browser/controlled_frame/controlled_frame_extensions_browser_api_provider.h"

#include "chrome/browser/controlled_frame/api/generated_api_registration.h"
#include "extensions/browser/extension_function_registry.h"

namespace controlled_frame {

void ControlledFrameExtensionsBrowserAPIProvider::RegisterExtensionFunctions(
    ExtensionFunctionRegistry* registry) {
  api::ControlledFrameGeneratedFunctionRegistry::RegisterAll(registry);
}

}  // namespace controlled_frame
