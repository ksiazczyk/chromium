// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Case-insensitive ASCII string set lookup header
// summary: Declares ContainsStringIgnoreCaseASCII, a helper that reports whether a string set contains a value ignoring ASCII case.
// ---

#ifndef EXTENSIONS_COMMON_UTILS_BASE_STRING_H_
#define EXTENSIONS_COMMON_UTILS_BASE_STRING_H_

#include <set>
#include <string>

namespace extensions {

bool ContainsStringIgnoreCaseASCII(const std::set<std::string>& collection,
                                   const std::string& value);

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_UTILS_BASE_STRING_H_
