// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebP parser fuzz test
// summary: LibFuzzer entry point that feeds arbitrary input data to ParseWebPImage to uncover crashes in WebP parsing.
// ---

#include <stddef.h>
#include <stdint.h>

#include "base/containers/span.h"
#include "base/logging.h"
#include "media/parsers/vp8_parser.h"
#include "media/parsers/webp_parser.h"
#include "testing/libfuzzer/libfuzzer_base_wrappers.h"

struct Environment {
  Environment() { logging::SetMinLogLevel(logging::LOGGING_FATAL); }
};

Environment* env = new Environment();

// Entry point for LibFuzzer.
DEFINE_LLVM_FUZZER_TEST_ONE_INPUT_SPAN(const base::span<const uint8_t> data) {
  media::ParseWebPImage(data);
  return 0;
}
