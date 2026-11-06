// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Structured headers fuzzer
// summary: Fuzz target that feeds arbitrary input to the structured header item, list-of-lists, and parameterised list parsers.
// ---

#include "net/http/structured_headers.h"

#include <string_view>

namespace net {
namespace structured_headers {

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  std::string_view input(reinterpret_cast<const char*>(data), size);
  ParseItem(input);
  ParseListOfLists(input);
  ParseParameterisedList(input);
  return 0;
}

}  // namespace structured_headers
}  // namespace net
