// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ambient animation background color lookup
// summary: Reads the background_solid color node from a Skottie ambient animation, falling back to white when the node is missing.
// relations:
//   - depends_on /ash/ambient/ui/ambient_animation_background_color.h
//   - implements /ash/ambient/ui/ambient_animation_background_color.h
//   - depends_on /base/logging.h
// ---

#include "ash/ambient/ui/ambient_animation_background_color.h"

#include <string_view>

#include "base/logging.h"
#include "cc/paint/skottie_color_map.h"
#include "cc/paint/skottie_resource_metadata.h"
#include "cc/paint/skottie_wrapper.h"

namespace ash {
namespace {

// This name is agreed upon with animation designers and supposed to be the same
// for all ambient-mode skottie animations. Do not change without consulting
// them.
constexpr std::string_view kBackgroundColorNode = "background_solid";

// Only used as a fallback. This should really not be used, but it's not worth
// crashing the production binary over this error.
constexpr SkColor kDefaultBackgroundColor = SK_ColorWHITE;

}  // namespace

SkColor GetAnimationBackgroundColor(const cc::SkottieWrapper& skottie) {
  cc::SkottieColorMap color_map = skottie.GetCurrentColorPropertyValues();
  auto iter = color_map.find(cc::HashSkottieResourceId(kBackgroundColorNode));
  if (iter == color_map.end()) {
    LOG(DFATAL) << "Background color node not find in ambient animation";
    return kDefaultBackgroundColor;
  } else {
    return iter->second;
  }
}

}  // namespace ash
