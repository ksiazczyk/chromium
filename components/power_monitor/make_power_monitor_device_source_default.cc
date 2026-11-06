// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default power monitor device source factory
// summary: Implements MakePowerMonitorDeviceSource by returning base::PowerMonitorDeviceSource for platforms without a dedicated implementation.
// ---

#include "components/power_monitor/make_power_monitor_device_source.h"

#include "base/power_monitor/power_monitor_device_source.h"

#include <memory>

// Returns an instance of base::PowerMonitorDeviceSource.
std::unique_ptr<base::PowerMonitorSource> MakePowerMonitorDeviceSource() {
  return std::make_unique<base::PowerMonitorDeviceSource>();
}
