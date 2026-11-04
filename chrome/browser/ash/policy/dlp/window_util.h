// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Window utility header for shell surface lookup
// summary: Declares GetShellSurfaceWindow, which returns the aura window of a shell surface with a given app ID, or null when none exists.
// ---

#ifndef CHROME_BROWSER_ASH_POLICY_DLP_WINDOW_UTIL_H_
#define CHROME_BROWSER_ASH_POLICY_DLP_WINDOW_UTIL_H_

#include <string>

namespace aura {
class Window;
}  // namespace aura

namespace ash {

// Searches all displays for a ShellSurfaceBase with |app_id| and
// returns its aura::Window. Returns null if no such shell surface exists.
aura::Window* GetShellSurfaceWindow(const std::string& app_id);

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_POLICY_DLP_WINDOW_UTIL_H_
