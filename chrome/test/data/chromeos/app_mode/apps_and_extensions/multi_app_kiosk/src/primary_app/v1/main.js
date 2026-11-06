// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test kiosk app background launch script
// summary: Background script that opens app_main.html in a 1920x1080 window when the test kiosk app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function(launchData) {
  chrome.app.window.create('app_main.html',
      { 'width': 1920,
        'height': 1080 },
      function(window) {
  });
});
