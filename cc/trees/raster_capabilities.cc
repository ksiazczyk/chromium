// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RasterCapabilities definitions
// summary: Provides the out-of-line default constructor, copy constructor, assignment operator and destructor for the RasterCapabilities struct.
// ---

#include "cc/trees/raster_capabilities.h"

namespace cc {

RasterCapabilities::RasterCapabilities() = default;

RasterCapabilities::RasterCapabilities(const RasterCapabilities& other) =
    default;

RasterCapabilities& RasterCapabilities::operator=(
    const RasterCapabilities& other) = default;

RasterCapabilities::~RasterCapabilities() = default;

}  // namespace cc
