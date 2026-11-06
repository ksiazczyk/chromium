// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Private verification tokens unit test runner
// summary: Main entry point that initializes the base test suite and Mojo embedder, then launches all unit tests for the private verification tokens component.
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
