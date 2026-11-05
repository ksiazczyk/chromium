// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop shortcut utility header
// summary: Declares CanCreateDesktopShortcut, which reports whether a desktop shortcut can be created for the given web contents.
// ---

#ifndef CHROME_BROWSER_UI_SHORTCUTS_DESKTOP_SHORTCUTS_UTILS_H_
#define CHROME_BROWSER_UI_SHORTCUTS_DESKTOP_SHORTCUTS_UTILS_H_

namespace content {
class WebContents;
}

namespace shortcuts {

// Returns whether a desktop shortcut can be created for the active web
// contents.
bool CanCreateDesktopShortcut(content::WebContents* web_contents);

}  // namespace shortcuts

#endif  // CHROME_BROWSER_UI_SHORTCUTS_DESKTOP_SHORTCUTS_UTILS_H_
