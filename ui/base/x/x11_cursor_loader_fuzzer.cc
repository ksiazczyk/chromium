// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: X11 cursor loader fuzzer
// summary: Fuzz test harness that feeds random data and a preferred size to ParseCursorFile to check the robustness of the X11 cursor file parser.
// ---

#include <stdint.h>

#include <tuple>

#include <fuzzer/FuzzedDataProvider.h>

#include "base/containers/span.h"
#include "base/memory/ref_counted_memory.h"
#include "base/memory/scoped_refptr.h"
#include "ui/base/x/x11_cursor_loader.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t* data, size_t size) {
  FuzzedDataProvider provider(data, size);
  auto memory = base::MakeRefCounted<base::RefCountedBytes>(
      base::as_byte_span(provider.ConsumeRandomLengthString()));
  uint32_t preferred_size = provider.ConsumeIntegralInRange<uint32_t>(0, 1000);
  std::ignore = ui::ParseCursorFile(memory, preferred_size);
  return 0;
}
