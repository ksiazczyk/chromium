// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock transport channel implementation
// summary: Implements MockTransportChannel construction, destruction and its weak pointer accessor.
// ---

#include "components/browser_actuator/test_support/mock_transport_channel.h"

namespace browser_actuator {

MockTransportChannel::MockTransportChannel() = default;
MockTransportChannel::~MockTransportChannel() = default;

base::WeakPtr<MockTransportChannel> MockTransportChannel::GetWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace browser_actuator
