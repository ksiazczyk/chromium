// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit test launcher entry point
// summary: Main entry point that initializes the base test suite and Mojo, then launches the WebEngine unit tests.
// ---

#include "base/functional/bind.h"
#include "base/test/launcher/unit_test_launcher.h"
#include "base/test/test_suite.h"
#include "mojo/core/embedder/embedder.h"

int main(int argc, char** argv) {
  base::TestSuite test_suite(argc, argv);
  mojo::core::Init();
  return base::LaunchUnitTests(
      argc, argv,
      base::BindOnce(&base::TestSuite::Run, base::Unretained(&test_suite)));
}
