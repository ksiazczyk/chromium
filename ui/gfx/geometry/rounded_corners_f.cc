// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: String output for RoundedCornersF
// summary: Implements RoundedCornersF::ToString, printing the four corner radii in constructor parameter order.
// ---

#include "ui/gfx/geometry/rounded_corners_f.h"

#include "base/strings/stringprintf.h"

namespace gfx {

std::string RoundedCornersF::ToString() const {
  // Print members in the same order of the constructor parameters.
  return base::StringPrintf("%f,%f,%f,%f", upper_left_, upper_right_,
                            lower_right_, lower_left_);
}

}  // namespace gfx
