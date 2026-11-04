// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Internal simdutf base64 shim declarations
// summary: Declares internal wrapper functions around simdutf base64 conversion so the base target avoids a direct dependency on simdutf; not for direct use.
// ---

#ifndef BASE_SIMDUTF_SHIM_H_
#define BASE_SIMDUTF_SHIM_H_

#include <stddef.h>
#include <stdint.h>

#include <span>

// Shim so the //base GN target can avoid directly using simdutf.
//
// Do not use directly. Use APIs in base/base64.h instead.
//
// Deliberately uses std::span to avoid having a circular dependency on //base.

namespace base::internal {

[[nodiscard]] size_t simdutf_base64_length_from_binary(size_t length);

[[nodiscard]] size_t simdutf_binary_to_base64(std::span<const uint8_t> input,
                                              std::span<char> binary_output);

}  // namespace base::internal

#endif  // BASE_SIMDUTF_SHIM_H_
