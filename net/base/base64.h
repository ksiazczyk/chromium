// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SIMD-accelerated Base64 decoding header
// summary: Declares SimdutfBase64Decode for decoding Base64 input via simdutf, noting it is only safe with trustworthy data or in sandboxed processes.
// ---

#ifndef NET_BASE_BASE64_H_
#define NET_BASE_BASE64_H_

#include <string>

#include "base/base64.h"
#include "net/base/net_export.h"

namespace net {

// Note: Only safe for use with trustworthy data or in sandboxed processes.
NET_EXPORT bool SimdutfBase64Decode(
    std::string_view input,
    std::string* output,
    base::Base64DecodePolicy policy = base::Base64DecodePolicy::kStrict);

}  // namespace net

#endif  // NET_BASE_BASE64_H_
