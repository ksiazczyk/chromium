// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Set volume remote command job header
// summary: Declares the set volume remote command job that sets the device output volume to a value in the range 0 to 100.
// ---

#ifndef CHROME_BROWSER_ASH_POLICY_REMOTE_COMMANDS_DEVICE_COMMAND_SET_VOLUME_JOB_H_
#define CHROME_BROWSER_ASH_POLICY_REMOTE_COMMANDS_DEVICE_COMMAND_SET_VOLUME_JOB_H_

#include <string>

#include "components/policy/core/common/remote_commands/remote_command_job.h"

namespace policy {

class DeviceCommandSetVolumeJob : public RemoteCommandJob {
 public:
  static const char kVolumeFieldName[];

  DeviceCommandSetVolumeJob();

  DeviceCommandSetVolumeJob(const DeviceCommandSetVolumeJob&) = delete;
  DeviceCommandSetVolumeJob& operator=(const DeviceCommandSetVolumeJob&) =
      delete;

  ~DeviceCommandSetVolumeJob() override;

  // RemoteCommandJob:
  enterprise_management::RemoteCommand_Type GetType() const override;

 protected:
  // RemoteCommandJob:
  bool ParseCommandPayload(const std::string& command_payload) override;
  void RunImpl(CallbackWithResult result_callback) override;

 private:
  // New volume level to be set, value in range [0,100].
  int volume_;
};

}  // namespace policy

#endif  // CHROME_BROWSER_ASH_POLICY_REMOTE_COMMANDS_DEVICE_COMMAND_SET_VOLUME_JOB_H_
