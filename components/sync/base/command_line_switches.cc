// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sync command-line switches implementation
// summary: Implements IsSyncAllowedByFlag, which checks whether the disable-sync switch is absent from the current command line.
// ---

#include "components/sync/base/command_line_switches.h"

#include <string>

#include "base/command_line.h"

namespace syncer {

bool IsSyncAllowedByFlag() {
  return !base::CommandLine::ForCurrentProcess()->HasSwitch(kDisableSync);
}

}  // namespace syncer
