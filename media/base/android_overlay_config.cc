// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AndroidOverlayConfig implementation
// summary: Provides default constructor, move constructor, and destructor definitions for the AndroidOverlayConfig class.
// ---

#include "media/base/android_overlay_config.h"

namespace media {

AndroidOverlayConfig::AndroidOverlayConfig() = default;
AndroidOverlayConfig::AndroidOverlayConfig(AndroidOverlayConfig&&) = default;
AndroidOverlayConfig::~AndroidOverlayConfig() = default;

}  // namespace media
