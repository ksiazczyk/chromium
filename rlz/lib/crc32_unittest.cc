// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// A test for ZLib's checksum function.

// ---docerion
// type: test
// title: CRC32 unit tests
// summary: Unit tests verifying rlz_lib Crc32 results for byte spans and strings against externally calculated checksum values.
// ---

#include "rlz/lib/crc32.h"

#include <string_view>

#include "base/containers/span.h"
#include "testing/gmock/include/gmock/gmock.h"
#include "testing/gtest/include/gtest/gtest.h"

TEST(Crc32Unittest, ByteTest) {
  struct {
    std::string_view data;
    // Externally calculated at http://crc32-checksum.waraxe.us/
    uint32_t crc;
  } kData[] = {
      {"Hello", 0xF7D18982},
      {"Google", 0x62B0F067},
      {"", 0x0},
      {"One more string.", 0x0CA14970},
  };

  for (const auto& item : kData) {
    EXPECT_EQ(item.crc, rlz_lib::Crc32(base::as_byte_span(item.data)));
  }
}

TEST(Crc32Unittest, CharTest) {
  struct {
    std::string_view data;
    // Externally calculated at http://crc32-checksum.waraxe.us/
    uint32_t crc;
  } kData[] = {
      {"Hello", 0xF7D18982},
      {"Google", 0x62B0F067},
      {"", 0x0},
      {"One more string.", 0x0CA14970},
      {"Google\r\n", 0x83A3E860},
  };

  uint32_t crc;
  for (const auto& item : kData) {
    EXPECT_TRUE(rlz_lib::Crc32(item.data, &crc));
    EXPECT_EQ(item.crc, crc);
  }
}
