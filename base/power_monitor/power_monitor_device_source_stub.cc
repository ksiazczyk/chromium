// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub power monitor device source
// summary: Stub implementation of PowerMonitorDeviceSource that always reports external power for platforms without battery monitoring support.
// ---

#include "base/power_monitor/power_monitor_device_source.h"

#include "base/notreached.h"

namespace base {

PowerStateObserver::BatteryPowerStatus
PowerMonitorDeviceSource::GetBatteryPowerStatus() const {
  return PowerStateObserver::BatteryPowerStatus::kExternalPower;
}

}  // namespace base
