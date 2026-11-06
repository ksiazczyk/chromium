// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Key system name helper functions
// summary: Implements helpers that identify Clear Key, External Clear Key and sub key systems by name in the Chromium media stack.
// ---

#include "media/base/key_system_names.h"

#include <string_view>

#include "base/strings/string_util.h"
#include "media/cdm/clear_key_cdm_common.h"

namespace media {

bool IsClearKey(std::string_view key_system) {
  return key_system == kClearKeyKeySystem;
}

bool IsSubKeySystemOf(std::string_view key_system, std::string_view base) {
  return key_system.starts_with(base) &&
         key_system.substr(base.size()).starts_with(".");
}

bool IsExternalClearKey(std::string_view key_system) {
  return key_system == kExternalClearKeyKeySystem ||
         IsSubKeySystemOf(key_system, kExternalClearKeyKeySystem);
}

}  // namespace media
