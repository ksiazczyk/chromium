// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fuzzer for segmentation config parser
// summary: Fuzz target that feeds arbitrary input bytes to ParseConfigFromString to check parser robustness.
// ---

#include "components/segmentation_platform/internal/config_parser.h"
#include "components/segmentation_platform/public/config.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  std::string input(reinterpret_cast<const char*>(data), size);
  segmentation_platform::ParseConfigFromString(input);
  return 0;
}
