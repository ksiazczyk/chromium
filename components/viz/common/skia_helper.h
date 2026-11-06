// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Skia helper declarations for overdraw and opacity filters
// summary: Declares the SkiaHelper class with static helpers to create an overdraw color filter and an opacity image filter.
// ---

#ifndef COMPONENTS_VIZ_COMMON_SKIA_HELPER_H_
#define COMPONENTS_VIZ_COMMON_SKIA_HELPER_H_

#include "components/viz/common/viz_common_export.h"
#include "third_party/skia/include/core/SkImage.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "third_party/skia/include/core/SkPoint.h"

namespace viz {
class VIZ_COMMON_EXPORT SkiaHelper {
 public:
  static sk_sp<SkColorFilter> MakeOverdrawColorFilter();

  static sk_sp<SkImageFilter> BuildOpacityFilter(float opacity);
};

}  // namespace viz

#endif  // COMPONENTS_VIZ_COMMON_SKIA_HELPER_H_
