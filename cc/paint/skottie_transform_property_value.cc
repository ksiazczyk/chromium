// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Skottie transform property value implementation
// summary: Implements equality and inequality operators for the Skottie transform property value struct.
// ---

#include "cc/paint/skottie_transform_property_value.h"

namespace cc {

bool SkottieTransformPropertyValue::operator==(
    const SkottieTransformPropertyValue& other) const {
  return position == other.position;
}

bool SkottieTransformPropertyValue::operator!=(
    const SkottieTransformPropertyValue& other) const {
  return !(*this == other);
}

}  // namespace cc
