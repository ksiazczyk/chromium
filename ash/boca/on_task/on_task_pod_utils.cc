// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OnTask pod frame header height utility implementation
// summary: Implements GetFrameHeaderHeight, returning the visible frame header height of a widget or zero when the header is missing or hidden.
// relations:
//   - depends_on /ash/boca/on_task/on_task_pod_utils.h
//   - depends_on /base/check.h
//   - depends_on /chromeos/ui/frame/frame_header.h
// ---

#include "ash/boca/on_task/on_task_pod_utils.h"

#include "base/check.h"
#include "chromeos/ui/frame/frame_header.h"

namespace ash::boca {

int GetFrameHeaderHeight(views::Widget* widget) {
  CHECK(widget);
  auto* const frame_header = chromeos::FrameHeader::Get(widget);
  return (frame_header && frame_header->view()->GetVisible())
             ? frame_header->GetHeaderHeight()
             : 0;
}

}  // namespace ash::boca
