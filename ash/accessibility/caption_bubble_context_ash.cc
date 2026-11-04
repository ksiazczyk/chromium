// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CaptionBubbleContextAsh implementation
// summary: Implements the Ash caption bubble context, supplying work area bounds, a session id, and the callback that opens caption settings for live captions.
// relations:
//   - implements /ash/accessibility/caption_bubble_context_ash.h
//   - depends_on /ash/shell.h
//   - depends_on /ash/wm/work_area_insets.h
// ---

#include "ash/accessibility/caption_bubble_context_ash.h"

#include "ash/shell.h"
#include "ash/wm/work_area_insets.h"
#include "base/functional/callback.h"
#include "base/location.h"
#include "base/notreached.h"
#include "base/task/sequenced_task_runner.h"

namespace {
constexpr char kAshSessionId[] = "ash";
}  // namespace

namespace ash::captions {

CaptionBubbleContextAsh::CaptionBubbleContextAsh(
    ::captions::OpenCaptionSettingsCallback callback)
    : open_caption_settings_callback_(std::move(callback)) {}

CaptionBubbleContextAsh::~CaptionBubbleContextAsh() = default;

void CaptionBubbleContextAsh::GetBounds(GetBoundsCallback callback) const {
  const std::optional<gfx::Rect> bounds =
      WorkAreaInsets::ForWindow(Shell::GetRootWindowForNewWindows())
          ->user_work_area_bounds();
  if (!bounds.has_value()) {
    return;
  }

  base::SequencedTaskRunner::GetCurrentDefault()->PostTask(
      FROM_HERE, base::BindOnce(std::move(callback), *bounds));
}

const std::string CaptionBubbleContextAsh::GetSessionId() const {
  return std::string(kAshSessionId);
}

bool CaptionBubbleContextAsh::IsActivatable() const {
  return false;
}

bool CaptionBubbleContextAsh::ShouldAvoidOverlap() const {
  return false;
}

std::unique_ptr<::captions::CaptionBubbleSessionObserver>
CaptionBubbleContextAsh::GetCaptionBubbleSessionObserver() {
  return nullptr;
}

::captions::OpenCaptionSettingsCallback
CaptionBubbleContextAsh::GetOpenCaptionSettingsCallback() {
  return open_caption_settings_callback_;
}

}  // namespace ash::captions
