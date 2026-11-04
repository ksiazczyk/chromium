// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows browser running-instance detection declarations
// summary: Declares IsBrowserAlreadyRunning, which checks for a running chrome.exe browser process using a cached global event handle.
// ---

#ifndef CHROME_BROWSER_WIN_BROWSER_UTIL_H_
#define CHROME_BROWSER_WIN_BROWSER_UTIL_H_

namespace browser_util {

// Check if current chrome.exe is already running as a browser process by trying
// to create a Global event with name same as full path of chrome.exe. This
// method caches the handle to this event so on subsequent calls also it can
// first close the handle and check for any other process holding the handle to
// the event.
bool IsBrowserAlreadyRunning();

}  // namespace browser_util

#endif  // CHROME_BROWSER_WIN_BROWSER_UTIL_H_
