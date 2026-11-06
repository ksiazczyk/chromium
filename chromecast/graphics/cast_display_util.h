// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Device scale factor utility header
// summary: Declares GetDeviceScaleFactor, which computes the default scale factor for a display resolution so Cast content fills larger screens.
// ---

#ifndef CHROMECAST_GRAPHICS_CAST_DISPLAY_UTIL_H_
#define CHROMECAST_GRAPHICS_CAST_DISPLAY_UTIL_H_

#include "ui/gfx/geometry/size.h"

namespace chromecast {

// Computes the default scale factor for display with given resolution.
//
// Cast applications target 720p; larger resolutions will be scaled up so
// that content fills the screen.
float GetDeviceScaleFactor(const gfx::Size& display_resolution);

}  // namespace chromecast

#endif  // CHROMECAST_GRAPHICS_CAST_DISPLAY_UTIL_H_
