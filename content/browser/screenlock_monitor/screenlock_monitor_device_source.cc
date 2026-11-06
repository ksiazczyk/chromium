// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScreenlockMonitorDeviceSource implementation (device_source.cc)
// summary: Implements the shared parts of ScreenlockMonitorDeviceSource, starting and stopping Mac screenlock listening in the constructor and destructor behind build flags.
// ---

#include "content/browser/screenlock_monitor/screenlock_monitor_device_source.h"

#include "build/build_config.h"

namespace content {

ScreenlockMonitorDeviceSource::ScreenlockMonitorDeviceSource() {
#if BUILDFLAG(IS_MAC)
  StartListeningForScreenlock();
#endif  // BUILDFLAG(IS_MAC)
}

ScreenlockMonitorDeviceSource::~ScreenlockMonitorDeviceSource() {
#if BUILDFLAG(IS_MAC)
  StopListeningForScreenlock();
#endif  // BUILDFLAG(IS_MAC)
}

}  // namespace content
