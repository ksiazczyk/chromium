// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IsRunningUnattended implementation
// summary: Implements IsRunningUnattended, which checks for the unattended test command-line switch.
// ---

#include "chrome/windows_services/service_program/is_running_unattended.h"

#include "base/command_line.h"
#include "chrome/windows_services/service_program/switches.h"

namespace internal {

bool IsRunningUnattended() {
  return base::CommandLine::ForCurrentProcess()->HasSwitch(
      switches::kUnattendedTest);
}

}  // namespace internal
