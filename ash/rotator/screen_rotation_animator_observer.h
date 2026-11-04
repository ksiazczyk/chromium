// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Screen rotation animator observer interface
// summary: Defines the observer interface notified when the screen is copied before rotation and when the rotation animation is finished or canceled.
// relations:
//   - references /ash/ash_export.h
//   - references /ash/rotator/screen_rotation_animator.h
// ---

#ifndef ASH_ROTATOR_SCREEN_ROTATION_ANIMATOR_OBSERVER_H_
#define ASH_ROTATOR_SCREEN_ROTATION_ANIMATOR_OBSERVER_H_

#include "ash/ash_export.h"

namespace ash {

class ScreenRotationAnimator;

class ASH_EXPORT ScreenRotationAnimatorObserver {
 public:
  ScreenRotationAnimatorObserver() {}

  // This will be called when the screen is copied before rotation.
  virtual void OnScreenCopiedBeforeRotation() = 0;

  // This will be called when the animation is ended or aborted.
  virtual void OnScreenRotationAnimationFinished(
      ScreenRotationAnimator* animator,
      bool canceled) = 0;

 protected:
  virtual ~ScreenRotationAnimatorObserver() {}
};

}  // namespace ash

#endif  // ASH_ROTATOR_SCREEN_ROTATION_ANIMATOR_OBSERVER_H_
