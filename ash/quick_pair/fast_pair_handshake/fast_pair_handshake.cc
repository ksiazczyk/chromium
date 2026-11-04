// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fast Pair handshake base class
// summary: Implements the FastPairHandshake base constructor and destructor, holding the adapter, device, completion callback and data encryptor.
// relations:
//   - implements /ash/quick_pair/fast_pair_handshake/fast_pair_handshake.h
// ---

#include "ash/quick_pair/fast_pair_handshake/fast_pair_handshake.h"

#include <cstdint>

#include "ash/quick_pair/common/device.h"
#include "ash/quick_pair/common/pair_failure.h"
#include "ash/quick_pair/fast_pair_handshake/fast_pair_data_encryptor_impl.h"
#include "ash/quick_pair/fast_pair_handshake/fast_pair_gatt_service_client_impl.h"
#include "base/functional/callback.h"
#include "device/bluetooth/bluetooth_adapter.h"

namespace ash {
namespace quick_pair {

FastPairHandshake::FastPairHandshake(
    scoped_refptr<device::BluetoothAdapter> adapter,
    scoped_refptr<Device> device,
    OnCompleteCallback on_complete,
    std::unique_ptr<FastPairDataEncryptor> data_encryptor,
    std::unique_ptr<FastPairGattServiceClient> gatt_service_client)
    : adapter_(std::move(adapter)),
      device_(std::move(device)),
      on_complete_callback_(std::move(on_complete)),
      fast_pair_data_encryptor_(std::move(data_encryptor)) {}

FastPairHandshake::~FastPairHandshake() = default;

}  // namespace quick_pair
}  // namespace ash
