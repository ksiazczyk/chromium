// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fuzz test for SingleFileTarReader chunk extraction
// summary: Fuzz test that drives SingleFileTarReader::ExtractChunk with arbitrary input buffers to verify extraction never crashes.
// ---

#include <stdint.h>

#include <vector>

#include "chrome/services/file_util/single_file_tar_reader.h"
#include "third_party/fuzztest/src/fuzztest/fuzztest.h"

void ExtractChunkNeverCrashes(
    const std::vector<std::vector<uint8_t>>& src_buffers) {
  SingleFileTarReader tar_reader;
  for (const auto& src_buffer : src_buffers) {
    base::span<const uint8_t> dst_buffer;
    tar_reader.ExtractChunk(src_buffer, dst_buffer);
  }
}

FUZZ_TEST(SingleFileTarReaderTest, ExtractChunkNeverCrashes);
