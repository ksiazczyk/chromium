// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CustomizeChromeSection enum definition
// summary: Defines the CustomizeChromeSection enum listing the sections of the Customize Chrome side panel, such as appearance, shortcuts, modules, wallpaper search and toolbar.
// ---

#ifndef CHROME_BROWSER_UI_WEBUI_SIDE_PANEL_CUSTOMIZE_CHROME_CUSTOMIZE_CHROME_SECTION_H_
#define CHROME_BROWSER_UI_WEBUI_SIDE_PANEL_CUSTOMIZE_CHROME_CUSTOMIZE_CHROME_SECTION_H_

enum class CustomizeChromeSection {
  kUnspecified,
  kAppearance,
  kShortcuts,
  kModules,
  kWallpaperSearch,
  kToolbar,
  kFooter,
};

#endif  // CHROME_BROWSER_UI_WEBUI_SIDE_PANEL_CUSTOMIZE_CHROME_CUSTOMIZE_CHROME_SECTION_H_
