// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VectorIcon empty icon implementation
// summary: Implements VectorIcon::EmptyIcon, returning a shared empty vector icon instance.
// ---

#include "ui/gfx/vector_icon_types.h"

namespace gfx {

// static
const VectorIcon& VectorIcon::EmptyIcon() {
  static constexpr VectorIcon kEmptyIcon;
  return kEmptyIcon;
}

}  // namespace gfx
