// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CRC-32 calculation declaration
// summary: Declares CalculateCrc32, which computes the CRC-32 checksum of a byte span.
// ---

#ifndef COMPONENTS_ZUCCHINI_CRC32_H_
#define COMPONENTS_ZUCCHINI_CRC32_H_

#include <stdint.h>

#include "base/containers/span.h"

namespace zucchini {

// Calculates CRC-32 of `data`.
uint32_t CalculateCrc32(base::span<const uint8_t> data);

}  // namespace zucchini

#endif  // COMPONENTS_ZUCCHINI_CRC32_H_
