// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fast Pair discoverable scanner interface
// summary: Defines the FastPairDiscoverableScanner interface for detecting Fast Pair discoverable advertisements and reporting found and lost devices through callbacks.
// relations:
//   - references /base/functional/callback_forward.h
//   - references /base/memory/scoped_refptr.h
// ---

#ifndef ASH_QUICK_PAIR_SCANNING_FAST_PAIR_FAST_PAIR_DISCOVERABLE_SCANNER_H_
#define ASH_QUICK_PAIR_SCANNING_FAST_PAIR_FAST_PAIR_DISCOVERABLE_SCANNER_H_

#include "base/functional/callback_forward.h"
#include "base/memory/scoped_refptr.h"

namespace ash {
namespace quick_pair {

class Device;

using DeviceCallback = base::RepeatingCallback<void(scoped_refptr<Device>)>;

// This class detects Fast Pair 'discoverable' advertisements (see
// https://developers.google.com/nearby/fast-pair/spec#AdvertisingWhenDiscoverable)
// and invokes the |found_callback| when it finds a device within the
// appropriate range.  |lost_callback| will be invoked when that device is lost
// to the bluetooth adapter.
class FastPairDiscoverableScanner {
 public:
  virtual ~FastPairDiscoverableScanner() = default;
};

}  // namespace quick_pair
}  // namespace ash

#endif  // ASH_QUICK_PAIR_SCANNING_FAST_PAIR_FAST_PAIR_DISCOVERABLE_SCANNER_H_
