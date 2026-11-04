// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OnTask pod frame header height utility header
// summary: Declares the ash::boca GetFrameHeaderHeight helper that calculates a widget's frame header height, returning 0 if the header is absent or invisible.
// relations:
//   - depends_on /ash/ash_export.h
//   - depends_on /ui/views/widget/widget.h
// ---

#ifndef ASH_BOCA_ON_TASK_ON_TASK_POD_UTILS_H_
#define ASH_BOCA_ON_TASK_ON_TASK_POD_UTILS_H_

#include "ash/ash_export.h"
#include "ui/views/widget/widget.h"

namespace ash::boca {

// Calculates the height of the `widget`'s frame header. Returns 0 if the frame
// header is not found or when the header is invisible.
ASH_EXPORT int GetFrameHeaderHeight(views::Widget* widget);

}  // namespace ash::boca

#endif  // ASH_BOCA_ON_TASK_ON_TASK_POD_UTILS_H_
