// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Web test switch helper implementation
// summary: Implements the helper that reports whether the run-web-tests switch is present on the command line.
// ---

#include "content/shell/common/shell_switches.h"

#include "base/command_line.h"

namespace switches {

bool IsRunWebTestsSwitchPresent() {
  return base::CommandLine::ForCurrentProcess()->HasSwitch(
      switches::kRunWebTests);
}

}  // namespace switches
