// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClosureAnimationObserver class header
// summary: Declares an implicit animation observer that runs a callback at the end of an animation and destroys itself afterwards.
// ---

#ifndef UI_COMPOSITOR_CLOSURE_ANIMATION_OBSERVER_H_
#define UI_COMPOSITOR_CLOSURE_ANIMATION_OBSERVER_H_

#include "base/functional/callback.h"
#include "ui/compositor/compositor_export.h"
#include "ui/compositor/layer_animation_observer.h"

namespace ui {

// Runs a callback at the end of the animation. This observe also destroys
// itself afterwards.
class COMPOSITOR_EXPORT ClosureAnimationObserver
    : public ImplicitAnimationObserver {
 public:
  explicit ClosureAnimationObserver(base::OnceClosure closure);

  ClosureAnimationObserver(const ClosureAnimationObserver&) = delete;
  ClosureAnimationObserver& operator=(const ClosureAnimationObserver&) = delete;

 private:
  ~ClosureAnimationObserver() override;

  // ImplicitAnimationObserver:
  void OnImplicitAnimationsCompleted() override;

  base::OnceClosure closure_;
};

}  // namespace ui

#endif  // UI_COMPOSITOR_CLOSURE_ANIMATION_OBSERVER_H_
