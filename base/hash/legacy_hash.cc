// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Legacy CityHash v1.0.3 implementation
// summary: Wraps the frozen CityHash v1.0.3 code to provide stable CityHash64 and CityHash64WithSeed results for legacy consumers.
// ---

#include "base/hash/legacy_hash.h"

#include <cstdint>

#include "base/containers/span.h"
#include "base/third_party/cityhash_v103/src/city_v103.h"

namespace base::legacy {

uint64_t CityHash64(base::span<const uint8_t> data) {
  return internal::cityhash_v103::CityHash64(
      reinterpret_cast<const char*>(data.data()), data.size());
}

uint64_t CityHash64WithSeed(base::span<const uint8_t> data, uint64_t seed) {
  return internal::cityhash_v103::CityHash64WithSeed(
      reinterpret_cast<const char*>(data.data()), data.size(), seed);
}

}  // namespace base::legacy
