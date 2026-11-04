// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowRotation layer animation element header
// summary: Declares the ash WindowRotation class, a layer animation element that animates a window layer between orientations using an interpolated transform and supports mid-transition target updates.
// relations:
//   - references /ash/ash_export.h
//   - depends_on /ui/compositor/layer_animation_element.h
//   - references /ui/gfx/geometry/point.h
// ---

#ifndef ASH_ROTATOR_WINDOW_ROTATION_H_
#define ASH_ROTATOR_WINDOW_ROTATION_H_

#include <memory>

#include "ash/ash_export.h"
#include "ui/compositor/layer_animation_element.h"
#include "ui/gfx/geometry/point.h"

namespace ui {
class InterpolatedTransform;
class Layer;
}

namespace ash {

// A window rotation represents a single transition from one window orientation
// to another. The  intended usage is that a new instance of the class is
// created for every transition. It is possible to update the target orientation
// in the middle of a transition.
class ASH_EXPORT WindowRotation : public ui::LayerAnimationElement {
 public:
  // |degrees| are clockwise. |layer| is the target of the animation. Does not
  // take ownership of |layer|.
  WindowRotation(int degrees, ui::Layer* layer);

  WindowRotation(const WindowRotation&) = delete;
  WindowRotation& operator=(const WindowRotation&) = delete;

  ~WindowRotation() override;

 private:
  // Generates the intermediate transformation matrices used during the
  // animation.
  void InitTransform(ui::Layer* layer);

  // Implementation of ui::LayerAnimationDelegate
  void OnStart(ui::LayerAnimationDelegate* delegate) override;
  bool OnProgress(double t, ui::LayerAnimationDelegate* delegate) override;
  void OnGetTarget(TargetValue* target) const override;
  void OnAbort(ui::LayerAnimationDelegate* delegate) override;

  std::unique_ptr<ui::InterpolatedTransform> interpolated_transform_;

  // The number of degrees to rotate.
  int degrees_;

  // The target origin.
  gfx::Point new_origin_;
};

}  // namespace ash

#endif  // ASH_ROTATOR_WINDOW_ROTATION_H_
