// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Installer test suite entry point
// summary: Runs the base test suite for the Chrome installer tests, serving as the main entry point for the test binary.
// ---

#include "base/test/test_suite.h"

int main(int argc, char** argv) {
  base::TestSuite test_suite(argc, argv);

  return test_suite.Run();
}
