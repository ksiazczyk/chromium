// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Permission prompt style enum
// summary: Defines the PermissionPromptStyle enum listing desktop permission prompt UI styles such as bubble, chip, location bar icon and quiet chip.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_STYLE_H_
#define CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_STYLE_H_

// Represents permission prompt UI styles on desktop.
enum class PermissionPromptStyle {
  // The permission prompt bubble is shown directly.
  kBubbleOnly,
  // The permission chip view in the location bar.
  kChip,
  // The prompt as an indicator in the right side of the omnibox.
  kLocationBarRightIcon,
  // The less prominent (quiet) version of permission chip view in the location
  // bar.
  kQuietChip
};

#endif  // CHROME_BROWSER_UI_VIEWS_PERMISSIONS_PERMISSION_PROMPT_STYLE_H_
