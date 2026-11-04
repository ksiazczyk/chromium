// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Scoped command line override for tests
// summary: Implements ScopedCommandLine, which saves the process command line on construction and restores the original at scope exit.
// ---

#include "base/test/scoped_command_line.h"

namespace base::test {

ScopedCommandLine::ScopedCommandLine()
    : original_command_line_(*base::CommandLine::ForCurrentProcess()) {}

ScopedCommandLine::~ScopedCommandLine() {
  *base::CommandLine::ForCurrentProcess() = original_command_line_;
}

CommandLine* ScopedCommandLine::GetProcessCommandLine() {
  return base::CommandLine::ForCurrentProcess();
}

}  // namespace base::test
