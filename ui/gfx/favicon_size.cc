// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Favicon target size calculation
// summary: Implements CalculateFaviconTargetSize, which scales oversized favicon dimensions down to the 16 px favicon size while keeping the aspect ratio.
// ---

#include "ui/gfx/favicon_size.h"

namespace gfx {

void CalculateFaviconTargetSize(int* width, int* height) {
  if (*width > kFaviconSize || *height > kFaviconSize) {
    // Too big, resize it maintaining the aspect ratio.
    float aspect_ratio = static_cast<float>(*width) /
                         static_cast<float>(*height);
    *height = kFaviconSize;
    *width = static_cast<int>(aspect_ratio * *height);
    if (*width > kFaviconSize) {
      *width = kFaviconSize;
      *height = static_cast<int>(*width / aspect_ratio);
    }
  }
}

}  // namespace gfx
