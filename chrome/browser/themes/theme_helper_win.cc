// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows theme helper
// summary: Windows-specific ThemeHelper override that always reports that the native window frame should be used.
// ---

#include "chrome/browser/themes/theme_helper_win.h"

#include "chrome/browser/themes/custom_theme_supplier.h"
#include "chrome/browser/themes/theme_properties.h"
#include "chrome/grit/theme_resources.h"

bool ThemeHelperWin::ShouldUseNativeFrame(
    const CustomThemeSupplier* theme_supplier) const {
  return true;
}
