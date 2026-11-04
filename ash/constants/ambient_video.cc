// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ambient video name conversion
// summary: Implements ToString for the AmbientVideo enum, returning metric-stable names for each ambient mode video.
// relations:
//   - depends_on /ash/constants/ambient_video.h
// ---

#include "ash/constants/ambient_video.h"

#include <string_view>

namespace ash {

std::string_view ToString(AmbientVideo video) {
  // See the "AmbientModeThemes" <variants> tag in histograms.xml. These names
  // are currently used for metrics purposes, so they cannot be arbitrarily
  // renamed.
  switch (video) {
    case AmbientVideo::kNewMexico:
      return "NewMexico";
    case AmbientVideo::kClouds:
      return "Clouds";
    case AmbientVideo::kJupiter:
      return "Jupiter";
  }
}

}  // namespace ash
