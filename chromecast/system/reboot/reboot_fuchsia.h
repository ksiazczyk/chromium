// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fuchsia reboot helpers header
// summary: Declares helpers to inject a service directory, reset restart checks, and change the flag file directory for testing the Fuchsia reboot code.
// ---

#ifndef CHROMECAST_SYSTEM_REBOOT_REBOOT_FUCHSIA_H_
#define CHROMECAST_SYSTEM_REBOOT_REBOOT_FUCHSIA_H_

#include <string>
#include <vector>

#include "base/files/file_path.h"

namespace sys {
class ServiceDirectory;
}  // namespace sys

namespace chromecast {

// Injects a service directory for testing.
void InitializeRebootShlib(const std::vector<std::string>& argv,
                           sys::ServiceDirectory* incoming_directory);

// Initialize the restart check. Can be called to reset the values for testing
// to simulate a restart.
void InitializeRestartCheck();

// Change tmp file directory for testing.
base::FilePath InitializeFlagFileDirForTesting(const base::FilePath sub);

}  // namespace chromecast

#endif  // CHROMECAST_SYSTEM_REBOOT_REBOOT_FUCHSIA_H_
