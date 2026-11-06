// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GLSurfaceOverlay implementation
// summary: Implements GLSurfaceOverlay, scheduling a native pixmap as an overlay plane for a widget at swap time.
// ---

#include "ui/gl/gl_surface_overlay.h"

#include "ui/gfx/gpu_fence.h"
#include "ui/gfx/native_ui_types.h"

namespace gl {

GLSurfaceOverlay::GLSurfaceOverlay(
    scoped_refptr<gfx::NativePixmap> pixmap,
    gfx::GpuFenceHandle gpu_fence,
    const gfx::OverlayPlaneData& overlay_plane_data)
    : pixmap_(std::move(pixmap)),
      gpu_fence_(std::move(gpu_fence)),
      overlay_plane_data_(overlay_plane_data) {}

GLSurfaceOverlay::GLSurfaceOverlay(GLSurfaceOverlay&& other) = default;

GLSurfaceOverlay::~GLSurfaceOverlay() {}

bool GLSurfaceOverlay::ScheduleOverlayPlane(gfx::AcceleratedWidget widget) {
  DCHECK(pixmap_);
  return pixmap_->ScheduleOverlayPlane(widget, overlay_plane_data_,
                                       std::move(gpu_fence_));
}

}  // namespace gl
