// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Skia-backed desktop frame implementation
// summary: Implements DesktopFrameSkia, wrapping an SkBitmap as a webrtc DesktopFrame without copying the pixel data.
// ---

#include "content/browser/media/capture/desktop_frame_skia.h"

namespace content {

DesktopFrameSkia::DesktopFrameSkia(const SkBitmap& bitmap)
    : webrtc::DesktopFrame(webrtc::DesktopSize(bitmap.width(), bitmap.height()),
                           bitmap.rowBytes(),
                           static_cast<uint8_t*>(bitmap.getPixels()),
                           nullptr),
      bitmap_(bitmap) {}

DesktopFrameSkia::~DesktopFrameSkia() = default;

}  // namespace content
