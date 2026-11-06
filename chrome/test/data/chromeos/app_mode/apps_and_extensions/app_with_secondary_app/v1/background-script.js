// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script launching the test app window
// summary: Chrome app background script that opens index.html in a 1920x1080 window when the kiosk test app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function (_launchData) {
  chrome.app.window.create(
    'index.html',
    { width: 1920, height: 1080 },
    function (_window) { }
  );
});
