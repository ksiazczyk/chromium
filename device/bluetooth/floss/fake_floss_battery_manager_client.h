// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake Floss battery manager client class declaration
// summary: Declares FakeFlossBatteryManagerClient, a test fake of the Floss battery manager client that serves battery information with a default 85 percent battery.
// ---

#ifndef DEVICE_BLUETOOTH_FLOSS_FAKE_FLOSS_BATTERY_MANAGER_CLIENT_H_
#define DEVICE_BLUETOOTH_FLOSS_FAKE_FLOSS_BATTERY_MANAGER_CLIENT_H_

#include "device/bluetooth/floss/floss_battery_manager_client.h"

namespace floss {

class DEVICE_BLUETOOTH_EXPORT FakeFlossBatteryManagerClient
    : public FlossBatteryManagerClient {
 public:
  static constexpr int kDefaultBatteryPercentage = 85;

  FakeFlossBatteryManagerClient();
  ~FakeFlossBatteryManagerClient() override;

  void Init(dbus::Bus* bus,
            const std::string& service_name,
            const int adapter_index,
            base::Version version,
            base::OnceClosure on_ready) override;

  void GetBatteryInformation(
      ResponseCallback<std::optional<BatterySet>> callback,
      const FlossDeviceId& device) override;

  void AddObserver(FlossBatteryManagerClientObserver* observer) override;

 private:
  base::WeakPtrFactory<FakeFlossBatteryManagerClient> weak_ptr_factory_{this};
};

}  // namespace floss

#endif  // DEVICE_BLUETOOTH_FLOSS_FAKE_FLOSS_BATTERY_MANAGER_CLIENT_H_
