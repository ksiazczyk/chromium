// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Windows unit test entry point for sandbox tests
// summary: Entry point that initializes a base TestSuite and launches the Windows sandbox unit tests through Chromium's unit test launcher.
// ---

#include "base/functional/bind.h"
#include "base/test/launcher/unit_test_launcher.h"
#include "base/test/test_suite.h"

int wmain(int argc, wchar_t **argv) {
  base::TestSuite test_suite(argc, argv);
  return base::LaunchUnitTests(
      argc, argv, false,
      base::BindOnce(&base::TestSuite::Run, base::Unretained(&test_suite)));
}
