// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VirtualWallet implementation
// summary: Implements VirtualWallet, a test helper that stores a digital credential and a simulated wallet action for WebDriver-driven Digital Credentials API flows.
// ---

#include "content/browser/digital_credentials/virtual_wallet.h"

#include <utility>

namespace content {

VirtualWallet::VirtualWallet() = default;
VirtualWallet::~VirtualWallet() = default;

void VirtualWallet::SetCredential(
    DigitalIdentityProvider::DigitalCredential credential) {
  stored_credential_ = std::move(credential);
}

std::optional<DigitalIdentityProvider::DigitalCredential>
VirtualWallet::GetCredential() const {
  if (!stored_credential_.has_value()) {
    return std::nullopt;
  }
  return stored_credential_->Clone();
}

void VirtualWallet::Clear() {
  stored_credential_.reset();
  action_.reset();
}

}  // namespace content
