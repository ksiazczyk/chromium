// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Kiosk Base Test App background script
// summary: Background script that listens for the app launch event and opens app_main.html in a window for the kiosk test app.
// ---

chrome.app.runtime.onLaunched.addListener(function(launchData) {
  chrome.app.window.create('app_main.html');
});