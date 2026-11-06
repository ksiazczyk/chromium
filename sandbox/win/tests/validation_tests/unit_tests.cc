// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Validation tests entry point
// summary: Entry point that launches the sandbox validation unit tests and dispatches commands when running as a sandboxed child process.
// ---

#include "base/functional/bind.h"
#include "base/test/launcher/unit_test_launcher.h"
#include "base/test/test_suite.h"
#include "sandbox/win/tests/common/controller.h"

int wmain(int argc, wchar_t **argv) {
  if (sandbox::IsChildProcessForTesting()) {
    // This instance is a child, not the test.
    return sandbox::DispatchCall();
  }

  base::TestSuite test_suite(argc, argv);
  return base::LaunchUnitTests(
      argc, argv, false,
      base::BindOnce(&base::TestSuite::Run, base::Unretained(&test_suite)));
}
