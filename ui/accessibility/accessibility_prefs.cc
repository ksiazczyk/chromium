// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Definitions of accessibility preference keys
// summary: Defines preference key constants for accessibility settings, including Android-specific performance filtering preferences.
// ---

// Define all the prefs used by ui/accessibility.
#include "ui/accessibility/accessibility_prefs.h"
#include "build/build_config.h"

namespace prefs {
// Profile and local state prefs.

const char kRendererAccessibilityEnabled[] =
    "settings.a11y.renderer_accessibility_enabled";

#if BUILDFLAG(IS_ANDROID)
// Whether different accessibility filtering modes for performance are allowed.
// Exposed only to mobile Android.
const char kAccessibilityPerformanceFilteringAllowed[] =
    "settings.a11y.allow_accessibility_performance_filtering";

#endif  // BUILDFLAG(IS_ANDROID)

}  // namespace prefs
