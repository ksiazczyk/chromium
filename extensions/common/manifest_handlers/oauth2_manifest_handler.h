// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OAuth2 manifest handler header
// summary: Declares OAuth2ManifestHandler, which parses the oauth2 manifest key and exposes GetOAuth2Info for retrieving OAuth2 client and scope data.
// ---

#ifndef EXTENSIONS_COMMON_MANIFEST_HANDLERS_OAUTH2_MANIFEST_HANDLER_H_
#define EXTENSIONS_COMMON_MANIFEST_HANDLERS_OAUTH2_MANIFEST_HANDLER_H_

#include "extensions/common/extension.h"
#include "extensions/common/manifest_handler.h"

namespace extensions {
namespace api::oauth2 {
struct OAuth2Info;
}  // namespace api::oauth2

// Parses the "oauth2" manifest key.
class OAuth2ManifestHandler : public ManifestHandler {
 public:
  OAuth2ManifestHandler();

  OAuth2ManifestHandler(const OAuth2ManifestHandler&) = delete;
  OAuth2ManifestHandler& operator=(const OAuth2ManifestHandler&) = delete;

  ~OAuth2ManifestHandler() override;

  static const api::oauth2::OAuth2Info& GetOAuth2Info(
      const Extension& extension);

 private:
  // ManifestHandler overrides:
  bool Parse(Extension* extension, std::u16string* error) override;
  base::span<const char* const> Keys() const override;
};

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MANIFEST_HANDLERS_OAUTH2_MANIFEST_HANDLER_H_
