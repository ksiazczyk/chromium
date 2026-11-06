// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OutputSurfaceFrame implementation
// summary: Defines default constructors, destructor and move assignment for the viz OutputSurfaceFrame class that carries frame metadata to the output surface.
// ---

#include "components/viz/service/display/output_surface_frame.h"

namespace viz {

OutputSurfaceFrame::OutputSurfaceFrame() = default;

OutputSurfaceFrame::OutputSurfaceFrame(OutputSurfaceFrame&& other) = default;

OutputSurfaceFrame::~OutputSurfaceFrame() = default;

OutputSurfaceFrame& OutputSurfaceFrame::operator=(OutputSurfaceFrame&& other) =
    default;

}  // namespace viz
