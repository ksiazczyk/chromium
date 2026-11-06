// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Insets and Outsets base implementation
// summary: Implements ToString for the integer Insets and Outsets shared base template, formatting the edge values as a string.
// ---

#include "ui/gfx/geometry/insets_outsets_base.h"

#include <string>

#include "base/strings/stringprintf.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/outsets.h"

namespace gfx {

template <typename T>
std::string InsetsOutsetsBase<T>::ToString() const {
  return base::StringPrintf("x:%g,%g y:%g,%g", left_, right_, top_, bottom_);
}

template class InsetsOutsetsBase<Insets>;
template class InsetsOutsetsBase<Outsets>;

}  // namespace gfx
