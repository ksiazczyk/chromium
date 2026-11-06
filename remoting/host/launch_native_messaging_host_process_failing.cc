// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Failing stub for native messaging host process launch
// summary: Stub implementation that always reports a failed native messaging host process launch.
// ---

#include "base/files/file.h"
#include "base/files/file_path.h"
#include "remoting/host/launch_native_messaging_host_process.h"

namespace remoting {

ProcessLaunchResult LaunchNativeMessagingHostProcess(
    const base::FilePath& binary_path,
    intptr_t parent_window_handle,
    bool elevate_process,
    base::File& read_handle,
    base::File& write_handle) {
  return PROCESS_LAUNCH_RESULT_FAILED;
}

}  // namespace remoting
