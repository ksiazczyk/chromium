// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AtomicUint32 implementation
// summary: Implements the Nearby AtomicUint32 platform API with get and set operations backed by a std::atomic uint32 value.
// ---

#include "chrome/services/sharing/nearby/platform/atomic_uint32.h"

namespace nearby::chrome {

AtomicUint32::AtomicUint32(std::uint32_t initial_value)
    : value_(initial_value) {}

AtomicUint32::~AtomicUint32() = default;

std::uint32_t AtomicUint32::Get() const {
  return value_;
}

void AtomicUint32::Set(std::uint32_t value) {
  value_ = value;
}

}  // namespace nearby::chrome
