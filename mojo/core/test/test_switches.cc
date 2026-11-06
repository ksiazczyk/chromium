// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mojo test command-line switches
// summary: Defines switch names that force a test process's Mojo node to be a broker or disable Mojo initialization in test child processes.
// ---

#include "mojo/core/test/test_switches.h"

namespace test_switches {

// Forces the process's global Mojo node to be configured as a broker. Only
// honored for test runners using MojoTestSuiteBase.
const char kMojoIsBroker[] = "mojo-is-broker";

// Disables Mojo initialization completely in the process. Only applies to
// test child processes. See base::MultiprocessTest.
const char kNoMojo[] = "no-mojo";

}  // namespace test_switches
