// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Components test command-line switches
// summary: Defines the initialize-mojo-as-broker switch used by tests to force Mojo broker initialization in a child process.
// ---

#include "components/test/test_switches.h"

namespace switches {

// Used by some tests to force Mojo broker initialization in a spawned child
// process.
extern const char kInitializeMojoAsBroker[] = "initialize-mojo-as-broker";

}  // namespace switches
