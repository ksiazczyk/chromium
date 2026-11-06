// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake Floss admin client implementation
// summary: Implements FakeFlossAdminClient, a test fake of the Floss admin D-Bus client whose Init skips bus setup and immediately signals readiness.
// ---

#include "device/bluetooth/floss/fake_floss_admin_client.h"

#include "base/logging.h"
#include "base/observer_list.h"
#include "device/bluetooth/floss/floss_dbus_client.h"

namespace floss {

FakeFlossAdminClient::FakeFlossAdminClient() = default;

FakeFlossAdminClient::~FakeFlossAdminClient() = default;

void FakeFlossAdminClient::Init(dbus::Bus* bus,
                                const std::string& service_name,
                                const int adapter_index,
                                base::Version version,
                                base::OnceClosure on_ready) {
  version_ = version;
  std::move(on_ready).Run();
}

}  // namespace floss
