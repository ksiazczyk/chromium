// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ExtensionGuid type alias
// summary: Defines the ExtensionGuid type alias that uniquely identifies an extension via a generated GUID.
// ---

#ifndef EXTENSIONS_COMMON_EXTENSION_GUID_H_
#define EXTENSIONS_COMMON_EXTENSION_GUID_H_

#include <string>

namespace extensions {

// If valid, uniquely identifies an Extension using a generated GUID.
using ExtensionGuid = std::string;

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_EXTENSION_GUID_H_
