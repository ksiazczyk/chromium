// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit test entry point
// summary: Provides the main() that launches components unit tests using the shared components test suite.
// ---

#include "components/test/components_test_suite.h"

int main(int argc, char** argv) {
  return base::LaunchUnitTests(argc, argv, GetLaunchCallback(argc, argv));
}
