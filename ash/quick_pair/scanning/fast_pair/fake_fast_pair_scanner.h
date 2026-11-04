// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake Fast Pair scanner header
// summary: Declares FakeFastPairScanner, a fake implementation of FastPairScanner that keeps an observer list and lets tests simulate device found and lost events.
// relations:
//   - implements /ash/quick_pair/scanning/fast_pair/fast_pair_scanner.h
//   - references /base/observer_list.h
// ---

#ifndef ASH_QUICK_PAIR_SCANNING_FAST_PAIR_FAKE_FAST_PAIR_SCANNER_H_
#define ASH_QUICK_PAIR_SCANNING_FAST_PAIR_FAKE_FAST_PAIR_SCANNER_H_

#include "ash/quick_pair/scanning/fast_pair/fast_pair_scanner.h"

#include "base/observer_list.h"

namespace device {
class BluetoothDevice;
}  // namespace device

namespace ash {
namespace quick_pair {

class FakeFastPairScanner final : public FastPairScanner {
 public:
  FakeFastPairScanner();
  FakeFastPairScanner(const FakeFastPairScanner&) = delete;
  FakeFastPairScanner& operator=(const FakeFastPairScanner&) = delete;

  void AddObserver(Observer* observer) override;
  void RemoveObserver(Observer* observer) override;
  void OnDevicePaired(scoped_refptr<Device> device) override;
  void NotifyDeviceFound(device::BluetoothDevice* device);
  void NotifyDeviceLost(device::BluetoothDevice* device);

 private:
  ~FakeFastPairScanner() override;

  base::ObserverList<Observer> observers_;
};

}  // namespace quick_pair
}  // namespace ash

#endif  // ASH_QUICK_PAIR_SCANNING_FAST_PAIR_FAKE_FAST_PAIR_SCANNER_H_
