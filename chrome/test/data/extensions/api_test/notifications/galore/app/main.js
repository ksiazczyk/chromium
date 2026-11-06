// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Notifications Galore test app entry point
// summary: Entry point script that creates the app window when the Chrome app is launched or restarted.
// ---

chrome.app.runtime.onLaunched.addListener(createWindow);
chrome.app.runtime.onRestarted.addListener(createWindow);
