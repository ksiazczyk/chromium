// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fast Pair hardware support utility declaration
// summary: Declares HasHardwareSupport, which returns whether the Bluetooth adapter supports the hardware advertisement filtering required for Fast Pair.
// relations:
//   - references /base/memory/scoped_refptr.h
//   - references /device/bluetooth/bluetooth_adapter.h
// ---

#ifndef ASH_QUICK_PAIR_FEATURE_STATUS_TRACKER_FAST_PAIR_SUPPORT_UTILS_H_
#define ASH_QUICK_PAIR_FEATURE_STATUS_TRACKER_FAST_PAIR_SUPPORT_UTILS_H_

#include "base/memory/scoped_refptr.h"
#include "device/bluetooth/bluetooth_adapter.h"

namespace ash {
namespace quick_pair {

// Returns true if the device has support for hardware advertisement
// filtering which is required for fast pair.
bool HasHardwareSupport(scoped_refptr<device::BluetoothAdapter> adapter);

}  // namespace quick_pair
}  // namespace ash

#endif  // ASH_QUICK_PAIR_FEATURE_STATUS_TRACKER_FAST_PAIR_SUPPORT_UTILS_H_
