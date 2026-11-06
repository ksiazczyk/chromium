// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// String manipulation functions used in the RLZ library.

// ---docerion
// type: source
// title: RLZ string utilities header
// summary: Declares the RLZ library string helpers IsAscii and BytesToString used for ASCII checks and hex encoding of byte data.
// ---

#ifndef RLZ_LIB_STRING_UTILS_H_
#define RLZ_LIB_STRING_UTILS_H_

#include <string>
#include <string_view>

#include "base/containers/span.h"

namespace rlz_lib {

bool IsAscii(unsigned char letter);

bool BytesToString(base::span<const uint8_t> data, std::string* string);

}  // namespace rlz_lib

#endif  // RLZ_LIB_STRING_UTILS_H_
