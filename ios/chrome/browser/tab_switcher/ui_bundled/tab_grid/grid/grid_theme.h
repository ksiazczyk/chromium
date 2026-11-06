// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GridTheme enum header
// summary: Defines the GridTheme enum that selects between the device's dynamic light/dark appearance and a forced dark mode for the grid.
// ---

#ifndef IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_GRID_THEME_H_
#define IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_GRID_THEME_H_

// Theme specifying if the grid follows the device theme or is forced to dark
// mode.
enum class GridTheme {
  // Matches the device's light/dark mode.
  // Explicitly set to 1 to avoid colliding with zero-initialized Objective-C
  // ivars (`_theme`), preventing "unset" states from appearing as `kDynamic`.
  kDynamic = 1,
  // Always uses the dark appearance.
  kDark,
};

#endif  // IOS_CHROME_BROWSER_TAB_SWITCHER_UI_BUNDLED_TAB_GRID_GRID_GRID_THEME_H_
