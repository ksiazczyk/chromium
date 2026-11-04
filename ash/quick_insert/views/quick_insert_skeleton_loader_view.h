// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert skeleton loader view header
// summary: Declares the skeleton loader view that shows a loading animation after a delay and returns to a blank state when the animation is stopped.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /base/time/time.h
//   - depends_on /base/timer/timer.h
// ---

#ifndef ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_SKELETON_LOADER_VIEW_H_
#define ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_SKELETON_LOADER_VIEW_H_

#include "ash/ash_export.h"
#include "base/time/time.h"
#include "base/timer/timer.h"
#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/views/controls/image_view.h"
#include "ui/views/metadata/view_factory.h"

namespace views {
class AnimationAbortHandle;
}

namespace ash {

// A view for rendering a skeleton loader for Quick Insert.
// The initial state is a blank view.
// Calling `StartAnimation` will render a skeleton loader animation after a
// delay. Calling `StopAnimation` will reset this back to a blank view.
class ASH_EXPORT QuickInsertSkeletonLoaderView : public views::ImageView {
  METADATA_HEADER(QuickInsertSkeletonLoaderView, views::ImageView)

 public:
  QuickInsertSkeletonLoaderView();
  QuickInsertSkeletonLoaderView(const QuickInsertSkeletonLoaderView&) = delete;
  QuickInsertSkeletonLoaderView& operator=(
      const QuickInsertSkeletonLoaderView&) = delete;
  ~QuickInsertSkeletonLoaderView() override;

  // Starts the loading animation after `initial_delay`.
  // If this is called while an animation is happening, the existing animation
  // is stopped and a new one is started.
  void StartAnimationAfter(base::TimeDelta initial_delay = base::Seconds(0));

  // Stops the loading animation.
  void StopAnimation();

  bool HasStartedAnimationForTesting() const;

 private:
  void StartAnimation();

  base::OneShotTimer animation_start_timer_;
  std::unique_ptr<views::AnimationAbortHandle> abort_handle_;
};

BEGIN_VIEW_BUILDER(ASH_EXPORT, QuickInsertSkeletonLoaderView, views::ImageView)
END_VIEW_BUILDER

}  // namespace ash

DEFINE_VIEW_BUILDER(ASH_EXPORT, ash::QuickInsertSkeletonLoaderView)

#endif  // ASH_QUICK_INSERT_VIEWS_QUICK_INSERT_SKELETON_LOADER_VIEW_H_
