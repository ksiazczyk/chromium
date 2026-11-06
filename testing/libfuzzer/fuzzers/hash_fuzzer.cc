// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Base hash fuzzer
// summary: LibFuzzer entry point that computes persistent and fast hashes over arbitrary input bytes using base hash functions.
// ---

#include "base/hash/hash.h"

#include <stdint.h>

#include "base/containers/span.h"
#include "testing/libfuzzer/libfuzzer_base_wrappers.h"

// Entry point for LibFuzzer.
DEFINE_LLVM_FUZZER_TEST_ONE_INPUT_SPAN(const base::span<const uint8_t> data) {
  base::PersistentHash(data);
  base::FastHash(data);
  return 0;
}
