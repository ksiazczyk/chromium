// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Main entry point for iOS web unit tests
// summary: Provides the main function that initializes the web test suite and Mojo embedder, then launches the iOS web unit tests.
// ---

#include "base/functional/bind.h"
#include "base/test/launcher/unit_test_launcher.h"
#include "ios/web/public/test/web_test_suite.h"
#include "mojo/core/embedder/embedder.h"

int main(int argc, char** argv) {
  web::WebTestSuite test_suite(argc, argv);

  mojo::core::Init();

  return base::LaunchUnitTests(
      argc, argv,
      base::BindOnce(&web::WebTestSuite::Run, base::Unretained(&test_suite)));
}
