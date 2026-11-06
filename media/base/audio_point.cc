// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Audio point string formatting implementation
// summary: Implements PointsToString, which formats a vector of 3D audio points as a human-readable comma-separated string.
// ---

#include "media/base/audio_point.h"

#include <stddef.h>

namespace media {

std::string PointsToString(const std::vector<Point>& points) {
  std::string points_string;
  if (!points.empty()) {
    for (size_t i = 0; i < points.size() - 1; ++i) {
      points_string.append(points[i].ToString());
      points_string.append(", ");
    }
    points_string.append(points.back().ToString());
  }
  return points_string;
}

}  // namespace media
