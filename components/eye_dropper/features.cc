// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Eye Dropper Feature Flag Definitions
// summary: Defines the kAllowEyeDropperWGCScreenCapture feature flag, which enables Windows Graphics Capture for Eye Dropper screen capture by default on Windows.
// ---

#include "components/eye_dropper/features.h"

#include "build/build_config.h"

namespace eye_dropper::features {

// Enables the use of WGC for the Eye Dropper screen capture.
BASE_FEATURE(kAllowEyeDropperWGCScreenCapture,
#if BUILDFLAG(IS_WIN)
             base::FEATURE_ENABLED_BY_DEFAULT
#else
             base::FEATURE_DISABLED_BY_DEFAULT
#endif  // BUILDFLAG(IS_WIN)
);

}  // namespace eye_dropper::features
