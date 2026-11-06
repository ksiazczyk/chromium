// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LoadFlagsToString declaration
// summary: Declares LoadFlagsToString, a helper that renders load flag bitmasks as human-readable LOAD_* name strings.
// ---

#ifndef NET_BASE_LOAD_FLAGS_TO_STRING_H_
#define NET_BASE_LOAD_FLAGS_TO_STRING_H_

#include <string>

#include "net/base/net_export.h"

namespace net {

// Convert `load_flags` to a string of the form "LOAD_ONLY_FROM_CACHE |
// LOAD_PREFETCH".
NET_EXPORT_PRIVATE std::string LoadFlagsToString(int load_flags);

}  // namespace net

#endif  // NET_BASE_LOAD_FLAGS_TO_STRING_H_
