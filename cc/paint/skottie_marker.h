// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Skottie marker struct
// summary: Defines the SkottieMarker struct with a name and begin and end times, mirroring the skottie::MarkerObserver API for Skottie animation markers.
// ---

#ifndef CC_PAINT_SKOTTIE_MARKER_H_
#define CC_PAINT_SKOTTIE_MARKER_H_

#include <string>

#include "cc/paint/paint_export.h"

namespace cc {

// See the skottie::MarkerObserver API for details. The arguments there are
// replicated here verbatim.
struct CC_PAINT_EXPORT SkottieMarker {
  std::string name;
  float begin_time;
  float end_time;
};

}  // namespace cc

#endif  // CC_PAINT_SKOTTIE_MARKER_H_
