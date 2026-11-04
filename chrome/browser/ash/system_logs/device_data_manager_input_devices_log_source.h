// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Device data manager input devices log source header
// summary: Declares a system logs source that fetches the state of the global DeviceDataManager for ChromeOS feedback logs.
// ---

#ifndef CHROME_BROWSER_ASH_SYSTEM_LOGS_DEVICE_DATA_MANAGER_INPUT_DEVICES_LOG_SOURCE_H_
#define CHROME_BROWSER_ASH_SYSTEM_LOGS_DEVICE_DATA_MANAGER_INPUT_DEVICES_LOG_SOURCE_H_

#include "components/feedback/system_logs/system_logs_source.h"

namespace system_logs {

// Fetches the state of the global DeviceDataManager for the system logs.
class DeviceDataManagerInputDevicesLogSource : public SystemLogsSource {
 public:
  DeviceDataManagerInputDevicesLogSource();
  DeviceDataManagerInputDevicesLogSource(
      const DeviceDataManagerInputDevicesLogSource&) = delete;
  DeviceDataManagerInputDevicesLogSource& operator=(
      const DeviceDataManagerInputDevicesLogSource&) = delete;
  ~DeviceDataManagerInputDevicesLogSource() override;

  // SystemLogsSource:
  void Fetch(SysLogsSourceCallback callback) override;
};

}  // namespace system_logs

#endif  // CHROME_BROWSER_ASH_SYSTEM_LOGS_DEVICE_DATA_MANAGER_INPUT_DEVICES_LOG_SOURCE_H_
