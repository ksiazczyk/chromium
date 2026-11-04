// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit test runner entry point for cc
// summary: Main entry point that initializes the cc test suite, initializes Mojo, and launches the compositor unit tests.
// ---

#include "base/functional/bind.h"
#include "base/test/launcher/unit_test_launcher.h"
#include "cc/test/cc_test_suite.h"
#include "mojo/core/embedder/embedder.h"

int main(int argc, char** argv) {
  cc::CCTestSuite test_suite(argc, argv);

  mojo::core::Init();

  return base::LaunchUnitTests(
      argc, argv,
      base::BindOnce(&cc::CCTestSuite::Run, base::Unretained(&test_suite)));
}
