// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock FIDO discovery observer implementation
// summary: Provides the trivial constructor and destructor for the MockFidoDiscoveryObserver test double.
// ---

#include "device/fido/mock_fido_discovery_observer.h"

namespace device {

MockFidoDiscoveryObserver::MockFidoDiscoveryObserver() = default;
MockFidoDiscoveryObserver::~MockFidoDiscoveryObserver() = default;

}  // namespace device
