// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Window occlusion change builder interface
// summary: Interface used by WindowOcclusionTracker to queue occlusion state and region changes for aura windows, applied when the builder is committed.
// ---

#ifndef UI_AURA_WINDOW_OCCLUSION_CHANGE_BUILDER_H_
#define UI_AURA_WINDOW_OCCLUSION_CHANGE_BUILDER_H_

#include <memory>

#include "ui/aura/aura_export.h"
#include "ui/aura/window.h"

class SkRegion;

namespace aura {

// Interface for WindowOcclusionTracker to update window occlusion info.
class AURA_EXPORT WindowOcclusionChangeBuilder {
 public:
  virtual ~WindowOcclusionChangeBuilder() = default;

  // Add an occlusion info change for |window|.
  // Note that setting Window::OcclusionState::UNKNOWN to a window is not
  // allowed.
  virtual void Add(Window* window,
                   Window::OcclusionState occlusion_state,
                   SkRegion occluded_region) = 0;

  // Factory to create the default implementation that updates occlusion info
  // on aura::Window. If `disallow_unknown' is true, the state change to
  // UNKONNWN state is not allowed and will result in CHECK failure.
  static std::unique_ptr<WindowOcclusionChangeBuilder> Create(
      bool disallow_unknown = true);
};

}  // namespace aura

#endif  // UI_AURA_WINDOW_OCCLUSION_CHANGE_BUILDER_H_
