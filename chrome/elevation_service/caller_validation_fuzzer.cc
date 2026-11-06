// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Caller validation fuzzer
// summary: LibFuzzer harness that feeds arbitrary byte spans to ValidateData to uncover crashes in caller validation.
// ---

#include "chrome/elevation_service/caller_validation.h"

#include <stddef.h>
#include <stdint.h>

#include "base/containers/span.h"
#include "base/process/process.h"
#include "testing/libfuzzer/libfuzzer_base_wrappers.h"

// Entry point for LibFuzzer.
DEFINE_LLVM_FUZZER_TEST_ONE_INPUT_SPAN(const base::span<const uint8_t> data) {
  std::ignore = elevation_service::ValidateData(base::Process::Current(), data);
  return 0;
}
