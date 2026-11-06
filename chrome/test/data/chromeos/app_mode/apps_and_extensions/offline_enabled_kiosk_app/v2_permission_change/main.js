// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test kiosk app background script
// summary: Background script that reports a kiosk session via a test message on launch and opens the app's main page in a 1920x1080 window.
// ---

chrome.app.runtime.onLaunched.addListener(function(launchData) {
  if (launchData.isKioskSession)
    chrome.test.sendMessage('launchData.isKioskSession = true');

  chrome.app.window.create('app_main.html',
      { 'width': 1920,
        'height': 1080 });
});
