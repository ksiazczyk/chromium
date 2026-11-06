// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockMessagePortHost implementation
// summary: Implements the mock MessagePortHost that binds a mojo receiver so messaging unit tests can simulate the browser-side message port host.
// ---

#include "extensions/renderer/api/messaging/mock_message_port_host.h"

namespace extensions {
MockMessagePortHost::MockMessagePortHost() = default;
MockMessagePortHost::~MockMessagePortHost() = default;

void MockMessagePortHost::BindReceiver(
    mojo::PendingAssociatedReceiver<mojom::MessagePortHost> receiver) {
  receiver_.Bind(std::move(receiver));
}

}  // namespace extensions
