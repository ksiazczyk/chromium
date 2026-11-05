// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome extensions API provider class declaration
// summary: Declares ChromeExtensionsAPIProvider, which supplies Chrome-specific API features, schemas, permissions, and manifest handlers to the extensions system.
// ---

#ifndef CHROME_COMMON_EXTENSIONS_CHROME_EXTENSIONS_API_PROVIDER_H_
#define CHROME_COMMON_EXTENSIONS_CHROME_EXTENSIONS_API_PROVIDER_H_

#include <string_view>

#include "extensions/common/extensions_api_provider.h"

namespace extensions {
class ManifestHandlerRegistry;

class ChromeExtensionsAPIProvider : public ExtensionsAPIProvider {
 public:
  ChromeExtensionsAPIProvider();

  ChromeExtensionsAPIProvider(const ChromeExtensionsAPIProvider&) = delete;
  ChromeExtensionsAPIProvider& operator=(const ChromeExtensionsAPIProvider&) =
      delete;

  ~ChromeExtensionsAPIProvider() override;

  // ExtensionsAPIProvider:
  void AddAPIFeatures(FeatureProvider* provider) override;
  void AddManifestFeatures(FeatureProvider* provider) override;
  void AddPermissionFeatures(FeatureProvider* provider) override;
  void AddBehaviorFeatures(FeatureProvider* provider) override;
  void AddAPIJSONSources(JSONFeatureProviderSource* json_source) override;
  bool IsAPISchemaGenerated(const std::string& name) override;
  std::string_view GetAPISchema(const std::string& name) override;
  void RegisterPermissions(PermissionsInfo* permissions_info) override;
  void RegisterManifestHandlers(ManifestHandlerRegistry* registry) override;
};

}  // namespace extensions

#endif  // CHROME_COMMON_EXTENSIONS_CHROME_EXTENSIONS_API_PROVIDER_H_
