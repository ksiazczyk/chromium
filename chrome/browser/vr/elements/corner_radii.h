// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Corner radii struct for VR UI elements
// summary: Defines a CornerRadii struct holding per-corner radii with helpers to check for zero, equal, and maximum radius values.
// ---

#ifndef CHROME_BROWSER_VR_ELEMENTS_CORNER_RADII_H_
#define CHROME_BROWSER_VR_ELEMENTS_CORNER_RADII_H_

#include <algorithm>

namespace vr {

struct CornerRadii {
  float upper_left;
  float upper_right;
  float lower_left;
  float lower_right;

  bool IsZero() const {
    return upper_right == 0.0f && upper_left == 0.0f && lower_right == 0.0f &&
           lower_left == 0.0f;
  }

  bool AllEqual() const {
    return upper_left == upper_right && upper_left == lower_right &&
           upper_left == lower_left;
  }

  float MaxRadius() const {
    return std::max({upper_left, upper_right, lower_left, lower_right});
  }
};

}  // namespace vr

#endif  // CHROME_BROWSER_VR_ELEMENTS_CORNER_RADII_H_
