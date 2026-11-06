// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bluetooth Mojo DiscoverySession implementation
// summary: Implements the Mojo DiscoverySession interface with IsActive and Stop calls backed by the platform discovery session.
// ---

#include "device/bluetooth/discovery_session.h"

#include "base/functional/bind.h"
#include "base/functional/callback_helpers.h"

namespace bluetooth {
DiscoverySession::DiscoverySession(
    std::unique_ptr<device::BluetoothDiscoverySession> session)
    : discovery_session_(std::move(session)) {}

DiscoverySession::~DiscoverySession() = default;

void DiscoverySession::IsActive(IsActiveCallback callback) {
  std::move(callback).Run(discovery_session_->IsActive());
}

void DiscoverySession::Stop(StopCallback callback) {
  discovery_session_->Stop();
  std::move(callback).Run(true /* success */);
}

}  // namespace bluetooth
