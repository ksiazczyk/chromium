// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebSocket extension parser fuzzer
// summary: LibFuzzer entry point that feeds arbitrary input to the WebSocket extension parser to uncover crashes or hangs.
// ---

#include <stddef.h>
#include <stdint.h>

#include "net/websockets/websocket_extension_parser.h"

// Entry point for LibFuzzer.
extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  std::string_view input(reinterpret_cast<const char*>(data), size);
  net::ParseWebSocketExtensions(input);

  return 0;
}
