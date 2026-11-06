// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows fullscreen mode detection header
// summary: Declares ui::IsFullScreenMode(), which reports whether the active window on Windows is running in fullscreen mode.
// ---

#ifndef UI_BASE_FULLSCREEN_WIN_H_
#define UI_BASE_FULLSCREEN_WIN_H_

namespace ui {

// Returns true if the active window is running in fullscreen mode.
bool IsFullScreenMode();

}  // namespace ui

#endif  // UI_BASE_FULLSCREEN_WIN_H_
