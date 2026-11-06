// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Audio point header
// summary: Declares the media Point alias over gfx::Point3F and the exported PointsToString helper for rendering point lists as text.
// ---

#ifndef MEDIA_BASE_AUDIO_POINT_H_
#define MEDIA_BASE_AUDIO_POINT_H_

#include <string>
#include <vector>

#include "media/base/media_export.h"
#include "ui/gfx/geometry/point3_f.h"

namespace media {

using Point = gfx::Point3F;

// Returns |points| as a human-readable string. (Not necessarily in the format
// required by ParsePointsFromString).
MEDIA_EXPORT std::string PointsToString(const std::vector<Point>& points);

}  // namespace media

#endif  // MEDIA_BASE_AUDIO_POINT_H_
