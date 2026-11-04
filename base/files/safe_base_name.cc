// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safe base name implementation
// summary: Implements SafeBaseName::Create, which validates that a path is a simple base name without parent references or trailing separators.
// ---

#include "base/files/safe_base_name.h"

namespace base {

// static
std::optional<SafeBaseName> SafeBaseName::Create(const FilePath& path) {
  auto basename = path.BaseName();

  if (!basename.IsAbsolute() && !basename.ReferencesParent() &&
      !basename.EndsWithSeparator()) {
    return std::make_optional(SafeBaseName(basename));
  }

  return std::nullopt;
}

// static
std::optional<SafeBaseName> SafeBaseName::Create(
    FilePath::StringViewType path) {
  return Create(FilePath(path));
}

SafeBaseName::SafeBaseName(const FilePath& path) : path_(path) {}

bool SafeBaseName::operator==(const SafeBaseName& that) const {
  return path_ == that.path_;
}

}  // namespace base
