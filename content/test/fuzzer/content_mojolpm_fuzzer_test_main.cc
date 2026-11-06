// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content MojoLPM fuzzer test main
// summary: Main entry point that enables test-only CHECK paths and hands control to the libFuzzer driver for content MojoLPM fuzzers.
// ---

#include <cstddef>
#include <cstdint>

#include "base/test/allow_check_is_test_for_testing.h"

extern "C" int LLVMFuzzerRunDriver(int* argc,
                                   char*** argv,
                                   int (*UserCb)(const uint8_t* Data,
                                                 size_t Size));
extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size);

int main(int argc, char** argv) {
  base::test::AllowCheckIsTestForTesting();
  return LLVMFuzzerRunDriver(&argc, &argv, LLVMFuzzerTestOneInput);
}
