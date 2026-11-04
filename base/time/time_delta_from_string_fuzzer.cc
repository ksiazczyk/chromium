// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fuzzer for duration string parsing
// summary: libFuzzer harness that feeds arbitrary byte input to TimeDeltaFromString to check the parser's robustness against malformed input.
// ---

#include "base/time/time_delta_from_string.h"

#include <stdint.h>

#include <string_view>

#include "base/containers/span.h"
#include "base/strings/string_view_util.h"
#include "base/time/time.h"
#include "testing/libfuzzer/libfuzzer_base_wrappers.h"

DEFINE_LLVM_FUZZER_TEST_ONE_INPUT_SPAN(base::span<const uint8_t> data) {
  auto input = base::as_string_view(data);
  base::TimeDeltaFromString(input);
  return 0;
}
