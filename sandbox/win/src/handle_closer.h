// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Handle closer configuration header
// summary: Defines the HandleCloserConfig struct shared from broker to target, with flags controlling handle closing, section and device handle cleanup and CSRSS disconnection.
// ---

#ifndef SANDBOX_WIN_SRC_HANDLE_CLOSER_H_
#define SANDBOX_WIN_SRC_HANDLE_CLOSER_H_

#include <stddef.h>

#include "sandbox/win/src/interception.h"
#include "sandbox/win/src/target_process.h"

namespace sandbox {

// Struct set in the target from the broker.
struct HandleCloserConfig {
  bool handle_closer_enabled;  // If false, no other fields are used.
  bool section_windows_global_shell_counters;
  bool file_device_api;
  bool file_ksecdd;
  bool disconnect_csrss;
};

SANDBOX_INTERCEPT HandleCloserConfig g_handle_closer_info;

}  // namespace sandbox

#endif  // SANDBOX_WIN_SRC_HANDLE_CLOSER_H_
