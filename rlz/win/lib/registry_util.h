// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Registry access helper interface
// summary: Declares registry helper functions for reading and writing RLZ values and checking HKEY_CURRENT_USER access rights.
// ---

#ifndef RLZ_WIN_LIB_REGISTRY_UTIL_H_
#define RLZ_WIN_LIB_REGISTRY_UTIL_H_

#include <optional>
#include <string>
#include <string_view>

namespace base {
namespace win {
class RegKey;
}  // namespace win
}  // namespace base

namespace rlz_lib {

std::optional<std::string> RegKeyReadValue(const base::win::RegKey& key,
                                           const wchar_t* name);

bool RegKeyWriteValue(base::win::RegKey* key,
                      const wchar_t* name,
                      std::string_view value);

bool HasUserKeyAccess(bool write_access);

}  // namespace rlz_lib

#endif  // RLZ_WIN_LIB_REGISTRY_UTIL_H_
