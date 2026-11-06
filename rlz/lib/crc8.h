// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Crc8 utility functions.

// ---docerion
// type: source
// title: CRC-8 utility interface
// summary: Declares the rlz_lib Crc8 class with static Generate and Verify methods for 8-bit checksums over byte spans.
// ---

#ifndef RLZ_LIB_CRC8_H_
#define RLZ_LIB_CRC8_H_

#include <stdint.h>

#include "base/containers/span.h"

namespace rlz_lib {
// CRC-8 methods:
class Crc8 {
 public:
  static bool Generate(base::span<const uint8_t> data, uint8_t* check_sum);
  static bool Verify(base::span<const uint8_t> data,
                     uint8_t checksum,
                     bool* matches);
};
}  // namespace rlz_lib

#endif  // RLZ_LIB_CRC8_H_
