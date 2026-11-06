// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SkiaBitmapDesktopFrame implementation
// summary: Implements creation of desktop frames that wrap the pixel data of an SkBitmap for ChromeOS screen capture.
// ---

#include "remoting/host/chromeos/skia_bitmap_desktop_frame.h"

#include <stddef.h>

#include <ostream>
#include <utility>

#include "base/check_op.h"

namespace remoting {

// static
SkiaBitmapDesktopFrame* SkiaBitmapDesktopFrame::Create(
    std::unique_ptr<SkBitmap> bitmap) {
  webrtc::DesktopSize size(bitmap->width(), bitmap->height());
  DCHECK_EQ(kBGRA_8888_SkColorType, bitmap->info().colorType())
      << "DesktopFrame objects always hold RGBA data.";

  uint8_t* bitmap_data = reinterpret_cast<uint8_t*>(bitmap->getPixels());
  const size_t row_bytes = bitmap->rowBytes();
  SkiaBitmapDesktopFrame* result = new SkiaBitmapDesktopFrame(
      size, row_bytes, bitmap_data, std::move(bitmap));

  return result;
}

SkiaBitmapDesktopFrame::SkiaBitmapDesktopFrame(webrtc::DesktopSize size,
                                               int stride,
                                               uint8_t* data,
                                               std::unique_ptr<SkBitmap> bitmap)
    : DesktopFrame(size, stride, data, nullptr), bitmap_(std::move(bitmap)) {}

SkiaBitmapDesktopFrame::~SkiaBitmapDesktopFrame() = default;

}  // namespace remoting
