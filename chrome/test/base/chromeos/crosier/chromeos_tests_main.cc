// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ChromeOS integration tests main entry point
// summary: Program entry point that initializes the command line and launches ChromeOS integration tests through the test launcher delegate.
// ---

#include "base/command_line.h"
#include "chrome/test/base/chromeos/crosier/chromeos_test_launcher.h"
#include "chrome/test/base/chromeos/crosier/chromeos_test_suite.h"

int main(int argc, char** argv) {
  base::CommandLine::Init(argc, argv);

  ChromeOSTestSuiteRunner runner;
  ChromeOSTestLauncherDelegate delegate(&runner);
  return LaunchChromeOSTests(&delegate, argc, argv);
}
