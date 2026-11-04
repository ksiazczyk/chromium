// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Compile-time FNV-1a hash function
// summary: Provides a consteval FNV-1a hash function for hashing strings at compile time.
// ---

#ifndef PARTITION_ALLOC_FNV1A_CONSTEVAL_H_
#define PARTITION_ALLOC_FNV1A_CONSTEVAL_H_

#include <cstdint>
#include <string_view>

namespace partition_alloc {

consteval uint32_t fnv1a_hash(const std::string_view s) {
  uint32_t hash = 2166136261u;
  for (auto ch : s) {
    hash ^= static_cast<uint32_t>(ch) & 0xFF;
    hash *= 1677619;
  }
  return hash;
}

}  // namespace partition_alloc

#endif  // PARTITION_ALLOC_FNV1A_CONSTEVAL_H_
