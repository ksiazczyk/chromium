// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: UnescapeURLComponent fuzzer
// summary: LibFuzzer entry point that calls base::UnescapeURLComponent on fuzzed input across all unescape rule types.
// ---

#include <stddef.h>
#include <stdint.h>

#include <string>

#include "base/strings/escape.h"

static const int kMaxUnescapeRule = 31;

// Entry point for LibFuzzer.
extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  std::string_view path(reinterpret_cast<const char*>(data), size);
  for (int i = 0; i <= kMaxUnescapeRule; i++) {
    base::UnescapeURLComponent(path, static_cast<base::UnescapeRule::Type>(i));
  }

  return 0;
}
