// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ReverseBytes unit test
// summary: Unit test verifying the constexpr byte reversal functions against known 32-bit and 64-bit values.
// ---

#include "partition_alloc/reverse_bytes.h"

#include <cstdint>

#include "testing/gmock/include/gmock/gmock.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace partition_alloc::internal {
namespace {

TEST(ReverseBytes, DeadBeefScramble) {
  if (sizeof(uintptr_t) == 4) {
    EXPECT_EQ(ReverseBytes(uintptr_t{0xefbeadde}), 0xdeadbeef);
  } else {
    // Hacky kludge to escape the compiler from immediately noticing that
    // this won't fit into a uintptr_t when it's four bytes.
    EXPECT_EQ(ReverseBytes(uint64_t{0xffeeddccefbeadde}), 0xdeadbeefccddeeff);
  }
}

}  // namespace
}  // namespace partition_alloc::internal
