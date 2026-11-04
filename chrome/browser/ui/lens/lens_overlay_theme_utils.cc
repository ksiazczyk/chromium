// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Lens overlay theme utilities implementation
// summary: Implements a helper that reports whether the Lens overlay side panel should use dark mode based on the browser theme service and a feature flag.
// ---

#include "chrome/browser/ui/lens/lens_overlay_theme_utils.h"

#include "chrome/browser/themes/theme_service.h"
#include "components/lens/lens_features.h"

namespace lens {

bool LensOverlayShouldUseDarkMode(ThemeService* theme_service) {
  return lens::features::UseBrowserDarkModeSettingForLensOverlay() &&
         theme_service->BrowserUsesDarkColors();
}

}  // namespace lens
