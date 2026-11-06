// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Google thumbnail test helper implementation
// summary: Implements CreateGoogleThumbnailForTest, decoding embedded Google thumbnail JPEG data into a gfx::Image for tests.
// ---

#include "components/history/core/test/thumbnail.h"

#include <memory>

#include "components/history/core/test/thumbnail-inl.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/codec/jpeg_codec.h"
#include "ui/gfx/image/image.h"

namespace history {

gfx::Image CreateGoogleThumbnailForTest() {
  return gfx::Image::CreateFrom1xBitmap(
      gfx::JPEGCodec::Decode(kGoogleThumbnail));
}

}  // namespace
