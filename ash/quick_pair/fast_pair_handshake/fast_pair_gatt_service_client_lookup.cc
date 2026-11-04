// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fast Pair GATT service client lookup singleton accessor
// summary: Implements FastPairGattServiceClientLookup::GetInstance by returning the FastPairGattServiceClientLookupImpl singleton instance.
// relations:
//   - implements /ash/quick_pair/fast_pair_handshake/fast_pair_gatt_service_client_lookup.h
//   - depends_on /ash/quick_pair/fast_pair_handshake/fast_pair_gatt_service_client_lookup_impl.h
// ---

#include "ash/quick_pair/fast_pair_handshake/fast_pair_gatt_service_client_lookup.h"
#include "ash/quick_pair/fast_pair_handshake/fast_pair_gatt_service_client_lookup_impl.h"

namespace ash {
namespace quick_pair {

// static
FastPairGattServiceClientLookup*
FastPairGattServiceClientLookup::GetInstance() {
  return FastPairGattServiceClientLookupImpl::GetImplInstance();
}

}  // namespace quick_pair
}  // namespace ash
