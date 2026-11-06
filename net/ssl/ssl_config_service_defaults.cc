// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default SSL config service implementation
// summary: Implements SSLConfigServiceDefaults, returning the default SSL context config and resolving ECH mode via an optional injected getter.
// ---

#include "net/ssl/ssl_config_service_defaults.h"

namespace net {

SSLConfigServiceDefaults::SSLConfigServiceDefaults(
    std::unique_ptr<EchModeGetter> ech_mode_getter)
    : ech_mode_getter_(std::move(ech_mode_getter)) {}

SSLConfigServiceDefaults::~SSLConfigServiceDefaults() = default;

SSLContextConfig SSLConfigServiceDefaults::GetSSLContextConfig() {
  return default_config_;
}

EchMode SSLConfigServiceDefaults::GetEchMode(std::string_view hostname) const {
  if (ech_mode_getter_) {
    return ech_mode_getter_->GetEchMode(hostname);
  }
  return EchMode::kOpportunistic;
}

bool SSLConfigServiceDefaults::CanShareConnectionWithClientCerts(
    std::string_view hostname) const {
  return false;
}

}  // namespace net
