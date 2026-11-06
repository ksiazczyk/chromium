// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock image decoder implementation
// summary: Implements the constructor and destructor of the gmock ImageDecoder test double used in unit tests.
// ---

#include "components/image_fetcher/core/mock_image_decoder.h"

#include "base/functional/callback.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/image/image.h"

namespace image_fetcher {
MockImageDecoder::MockImageDecoder() = default;
MockImageDecoder::~MockImageDecoder() = default;
}  // namespace image_fetcher
