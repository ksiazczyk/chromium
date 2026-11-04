// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: URL constants for the VC background WebUI
// summary: Declares string constants naming the video conference background WebUI host and its chrome URL for use across the ChromeOS Ash WebUI code.
// ---

#ifndef ASH_WEBUI_VC_BACKGROUND_UI_URL_CONSTANTS_H_
#define ASH_WEBUI_VC_BACKGROUND_UI_URL_CONSTANTS_H_

#include <string_view>

namespace ash::vc_background_ui {

inline constexpr std::string_view kChromeUIVcBackgroundHost = "vc-background";
inline constexpr std::string_view kChromeUIVcBackgroundURL =
    "chrome://vc-background/";

}  // namespace ash::vc_background_ui

#endif  // ASH_WEBUI_VC_BACKGROUND_UI_URL_CONSTANTS_H_
