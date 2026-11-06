// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FIDO discovery base implementation
// summary: Implements the FidoDiscoveryBase constructor, destructor, and default Stop behavior for authenticator discovery.
// ---

#include "device/fido/fido_discovery_base.h"

namespace device {

FidoDiscoveryBase::FidoDiscoveryBase(FidoTransportProtocol transport)
    : transport_(transport) {}
FidoDiscoveryBase::~FidoDiscoveryBase() = default;

void FidoDiscoveryBase::Stop() {}

}  // namespace device
