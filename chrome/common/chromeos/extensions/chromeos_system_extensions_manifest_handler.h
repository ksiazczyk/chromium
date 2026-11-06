// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS system extension manifest handler declaration
// summary: Declares ChromeOSSystemExtensionHandler, the extensions manifest handler responsible for parsing the chromeos_system_extension manifest key.
// ---

#ifndef CHROME_COMMON_CHROMEOS_EXTENSIONS_CHROMEOS_SYSTEM_EXTENSIONS_MANIFEST_HANDLER_H_
#define CHROME_COMMON_CHROMEOS_EXTENSIONS_CHROMEOS_SYSTEM_EXTENSIONS_MANIFEST_HANDLER_H_

#include <string>

#include "base/containers/span.h"
#include "extensions/common/extension.h"
#include "extensions/common/manifest_handler.h"

namespace chromeos {

// Parses the "chromeos_system_extension" manifest key.
class ChromeOSSystemExtensionHandler : public extensions::ManifestHandler {
 public:
  ChromeOSSystemExtensionHandler();
  ChromeOSSystemExtensionHandler(const ChromeOSSystemExtensionHandler&) =
      delete;
  ChromeOSSystemExtensionHandler& operator=(
      const ChromeOSSystemExtensionHandler&) = delete;
  ~ChromeOSSystemExtensionHandler() override;

  bool Parse(extensions::Extension* extension, std::u16string* error) override;
  base::span<const char* const> Keys() const override;
};

}  // namespace chromeos

#endif  // CHROME_COMMON_CHROMEOS_EXTENSIONS_CHROMEOS_SYSTEM_EXTENSIONS_MANIFEST_HANDLER_H_
