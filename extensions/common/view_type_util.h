// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: View type string conversion declaration
// summary: Declares GetViewTypeFromString, which maps a view type name string to a mojom::ViewType and reports whether a match was found.
// ---

#ifndef EXTENSIONS_COMMON_VIEW_TYPE_UTIL_H_
#define EXTENSIONS_COMMON_VIEW_TYPE_UTIL_H_

#include <string>

#include "extensions/common/mojom/view_type.mojom-forward.h"

namespace extensions {

// Matches the `view_type` to the corresponding ViewType, and populates
// `view_type_out`. Returns true if a match is found.
bool GetViewTypeFromString(const std::string& view_type,
                           mojom::ViewType* view_type_out);

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_VIEW_TYPE_UTIL_H_
