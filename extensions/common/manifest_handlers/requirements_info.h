// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Requirements manifest handler declarations
// summary: Declares RequirementsInfo, which stores declared extension requirements such as WebGL, and the RequirementsHandler for the requirements manifest key.
// ---

#ifndef EXTENSIONS_COMMON_MANIFEST_HANDLERS_REQUIREMENTS_INFO_H_
#define EXTENSIONS_COMMON_MANIFEST_HANDLERS_REQUIREMENTS_INFO_H_

#include <memory>
#include <string>

#include "extensions/common/extension.h"
#include "extensions/common/manifest.h"
#include "extensions/common/manifest_handler.h"

namespace extensions {

// Declared requirements for the extension.
struct RequirementsInfo : public Extension::ManifestData {
  static const char* kManifestDataKey;

  RequirementsInfo();
  ~RequirementsInfo() override;

  bool webgl = false;

  static const RequirementsInfo& GetRequirements(const Extension* extension);
};

// Parses the "requirements" manifest key.
class RequirementsHandler : public ManifestHandler {
 public:
  RequirementsHandler();

  RequirementsHandler(const RequirementsHandler&) = delete;
  RequirementsHandler& operator=(const RequirementsHandler&) = delete;

  ~RequirementsHandler() override;

  bool Parse(Extension* extension, std::u16string* error) override;

  bool AlwaysParseForType(Manifest::Type type) const override;

 private:
  base::span<const char* const> Keys() const override;
};

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MANIFEST_HANDLERS_REQUIREMENTS_INFO_H_
