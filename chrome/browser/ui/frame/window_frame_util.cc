// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowFrameUtil implementation for Windows caption buttons
// summary: Implements static helpers that compute the caption button background alpha and the size of the caption button area in the browser frame.
// ---

#include "chrome/browser/ui/frame/window_frame_util.h"

#include "build/build_config.h"
#include "ui/gfx/geometry/size.h"

// static
SkAlpha WindowFrameUtil::CalculateWindowsCaptionButtonBackgroundAlpha(
    SkAlpha theme_alpha) {
  return theme_alpha == SK_AlphaOPAQUE ? 0xCC : theme_alpha;
}

// static
gfx::Size WindowFrameUtil::GetWindowsCaptionButtonAreaSize() {
  // TODO(crbug.com/40200697): Fix uses of this to dynamically compute the size
  // of the caption button area.
  constexpr int kNumButtons = 3;

  return gfx::Size((kNumButtons * kWindowsCaptionButtonWidth) +
                       ((kNumButtons - 1) * kWindowsCaptionButtonVisualSpacing),
                   kWindowsCaptionButtonHeightRestored);
}
