// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockSystemSignalsServiceHost implementation
// summary: Implements the mock service host and Mojo-backed mock service, including remote binding and simulated disconnects for tests.
// ---

#include "components/device_signals/core/browser/mock_system_signals_service_host.h"

namespace device_signals {

MockSystemSignalsServiceHost::MockSystemSignalsServiceHost() = default;
MockSystemSignalsServiceHost::~MockSystemSignalsServiceHost() = default;

MockSystemSignalsService::MockSystemSignalsService() : receiver_(this) {}
MockSystemSignalsService::~MockSystemSignalsService() = default;

mojo::PendingRemote<device_signals::mojom::SystemSignalsService>
MockSystemSignalsService::BindNewPipeAndPassRemote() {
  return receiver_.BindNewPipeAndPassRemote();
}

void MockSystemSignalsService::SimulateDisconnect() {
  receiver_.reset();
}

}  // namespace device_signals
