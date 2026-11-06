// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DJB2 hash implementation
// summary: Implements the DJB2Hash function that computes a DJB2 hash over a byte buffer with a seed.
// ---

#include "media/base/djb2.h"

#include "base/compiler_specific.h"

uint32_t DJB2Hash(const void* buf, size_t len, uint32_t seed) {
  const uint8_t* src = reinterpret_cast<const uint8_t*>(buf);
  uint32_t hash = seed;
  for (size_t i = 0; i < len; ++i) {
    hash = hash * 33 + UNSAFE_TODO(src[i]);
  }
  return hash;
}
