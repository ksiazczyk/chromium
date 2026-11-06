// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Zoom constants interface
// summary: Declares GetPresetZoomFactorsAsJSON for exposing the preset zoom factors as JSON.
// ---

#ifndef COMPONENTS_ZOOM_PAGE_ZOOM_CONSTANTS_H_
#define COMPONENTS_ZOOM_PAGE_ZOOM_CONSTANTS_H_

#include <stddef.h>
#include <string>

namespace zoom {

std::string GetPresetZoomFactorsAsJSON();

}  // namespace zoom

#endif  // COMPONENTS_ZOOM_PAGE_ZOOM_CONSTANTS_H_
