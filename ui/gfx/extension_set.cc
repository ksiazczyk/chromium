// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Extension set helpers implementation
// summary: Implements helpers to build an ExtensionSet from a space-separated string, test membership and join the set back into a string.
// ---

#include "ui/gfx/extension_set.h"

#include <string_view>

#include "base/strings/string_split.h"
#include "base/strings/string_util.h"

namespace gfx {

ExtensionSet MakeExtensionSet(std::string_view extensions_string) {
  return ExtensionSet(SplitStringPiece(
      extensions_string, " ", base::TRIM_WHITESPACE, base::SPLIT_WANT_ALL));
}

bool HasExtension(const ExtensionSet& extension_set,
                  std::string_view extension) {
  return extension_set.find(extension) != extension_set.end();
}

std::string MakeExtensionString(const ExtensionSet& extension_set) {
  std::vector<std::string_view> extension_list(extension_set.begin(),
                                               extension_set.end());
  return base::JoinString(extension_list, " ");
}

}  // namespace gfx
