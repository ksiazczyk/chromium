// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mac API key from Info.plist interface
// summary: Declares GetAPIKeyFromInfoPlist for reading a Google API key value from the macOS framework bundle Info.plist.
// ---

#ifndef GOOGLE_APIS_GOOGLE_API_KEYS_MAC_H_
#define GOOGLE_APIS_GOOGLE_API_KEYS_MAC_H_

#include <string_view>

#include "base/component_export.h"

namespace google_apis {

COMPONENT_EXPORT(GOOGLE_APIS)
std::string GetAPIKeyFromInfoPlist(std::string_view key_name);

}  // namespace google_apis

#endif  // GOOGLE_APIS_GOOGLE_API_KEYS_MAC_H_
