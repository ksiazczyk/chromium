// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Rusty JPEG feature definition
// summary: Defines the kRustyJpegFeature base feature, disabled by default, that gates use of Rust for JPEG decoding and encoding.
// ---

#include "skia/rusty_jpeg_feature.h"

namespace skia {

BASE_FEATURE(kRustyJpegFeature, base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace skia
