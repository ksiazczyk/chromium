// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Power monitor device source factory declaration
// summary: Declares MakePowerMonitorDeviceSource, which returns a base::PowerMonitorSource that uses the current device as the source of signals.
// ---

#ifndef COMPONENTS_POWER_MONITOR_MAKE_POWER_MONITOR_DEVICE_SOURCE_H_
#define COMPONENTS_POWER_MONITOR_MAKE_POWER_MONITOR_DEVICE_SOURCE_H_

#include <memory>

namespace base {
class PowerMonitorSource;
}

// Returns an implementation of `base::PowerMonitorSource` that uses the current
// device as the source of signals.
std::unique_ptr<base::PowerMonitorSource> MakePowerMonitorDeviceSource();

#endif  // COMPONENTS_POWER_MONITOR_MAKE_POWER_MONITOR_DEVICE_SOURCE_H_
