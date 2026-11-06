// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FakePrivateAiNetworkDriver implementation
// summary: Implements a stub network driver that returns empty cert verifier params, ignores network context creation, and reports a configurable proxy state.
// ---

#include "components/private_ai/testing/fake_private_ai_network_driver.h"

namespace private_ai {

FakePrivateAiNetworkDriver::FakePrivateAiNetworkDriver() = default;

FakePrivateAiNetworkDriver::~FakePrivateAiNetworkDriver() = default;

network::mojom::CertVerifierServiceRemoteParamsPtr
FakePrivateAiNetworkDriver::GetCertVerifierParams() {
  mojo::PendingRemote<cert_verifier::mojom::CertVerifierService> remote;
  mojo::PendingReceiver<cert_verifier::mojom::CertVerifierServiceClient> client;
  return network::mojom::CertVerifierServiceRemoteParams::New(
      std::move(remote), std::move(client));
}

void FakePrivateAiNetworkDriver::CreateNetworkContext(
    mojo::PendingReceiver<network::mojom::NetworkContext> receiver,
    network::mojom::NetworkContextParamsPtr params) {}

std::optional<bool> FakePrivateAiNetworkDriver::IsProxyConfigured() const {
  return is_proxy_configured_;
}

}  // namespace private_ai
