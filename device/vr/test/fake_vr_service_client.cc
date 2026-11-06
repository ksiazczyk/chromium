// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake VR service client implementation
// summary: Implements FakeVRServiceClient, a test client that records the last seen XR device ID and checks device IDs against it.
// ---

#include "device/vr/test/fake_vr_service_client.h"

namespace device {

FakeVRServiceClient::FakeVRServiceClient(
    mojo::PendingReceiver<mojom::VRServiceClient> receiver)
    : receiver_(this, std::move(receiver)) {}

FakeVRServiceClient::~FakeVRServiceClient() {}

void FakeVRServiceClient::SetLastDeviceId(mojom::XRDeviceId id) {
  last_device_id_ = id;
}

bool FakeVRServiceClient::CheckDeviceId(mojom::XRDeviceId id) {
  return id == last_device_id_;
}

}  // namespace device
