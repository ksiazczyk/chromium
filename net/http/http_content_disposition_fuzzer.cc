// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fuzzer for Content-Disposition parsing
// summary: LibFuzzer entry point that constructs HttpContentDisposition from fuzzed header values and random charset strings.
// ---

#include <cstddef>
#include <cstdint>

#include <fuzzer/FuzzedDataProvider.h>

#include "net/http/http_content_disposition.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  FuzzedDataProvider input{data, size};
  auto charset = input.ConsumeRandomLengthString(100u);
  auto header = input.ConsumeRemainingBytesAsString();
  net::HttpContentDisposition content_disposition{header, charset};
  return 0;
}
