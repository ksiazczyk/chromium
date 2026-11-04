// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Perf test suite entry point
// summary: Main entry point that runs base performance tests through base::PerfTestSuite.
// ---

#include "base/test/perf_test_suite.h"

int main(int argc, char** argv) {
  return base::PerfTestSuite(argc, argv).Run();
}
