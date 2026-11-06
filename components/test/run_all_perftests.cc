// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Performance test entry point
// summary: Provides the main() that launches components performance tests serially through the shared components test suite.
// ---

#include "components/test/components_test_suite.h"

int main(int argc, char** argv) {
  return base::LaunchUnitTestsSerially(argc, argv,
                                       GetLaunchCallback(argc, argv));
}
