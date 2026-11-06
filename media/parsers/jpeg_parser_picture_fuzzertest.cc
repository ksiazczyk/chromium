// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: JPEG picture parser fuzzer
// summary: LibFuzzer entry point that feeds arbitrary input bytes to ParseJpegPicture to check the JPEG parser for crashes.
// ---

#include <stddef.h>
#include <stdint.h>

#include "base/containers/span.h"
#include "base/logging.h"
#include "media/parsers/jpeg_parser.h"
#include "testing/libfuzzer/libfuzzer_base_wrappers.h"

struct Environment {
  Environment() { logging::SetMinLogLevel(logging::LOGGING_FATAL); }
};

Environment* env = new Environment();

// Entry point for LibFuzzer.
DEFINE_LLVM_FUZZER_TEST_ONE_INPUT_SPAN(const base::span<const uint8_t> data) {
  media::JpegParseResult result;
  media::ParseJpegPicture(data, &result);
  return 0;
}
