// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Linux window manager role name constants
// summary: Defines the kStatusIconWmRoleName constant used to construct status-icon windows under X11 on Linux.
// ---

#ifndef UI_BASE_WM_ROLE_NAMES_LINUX_H_
#define UI_BASE_WM_ROLE_NAMES_LINUX_H_

namespace ui {

// Return the status-icon wm_role_name. Only used to construct status-icon
// windows for x11.
inline constexpr char kStatusIconWmRoleName[] = "status-icon";

}  // namespace ui

#endif  // UI_BASE_WM_ROLE_NAMES_LINUX_H_
