// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: App window launcher for the notification test
// summary: Launches the test app and opens index.html in a window configured by options sent back from the test harness.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.sendMessage('launched', function(reply) {
    // Create window options defined in tests.
    const options = JSON.parse(reply);
    chrome.app.window.create('index.html', options, function(appWindow) {
      appWindow.focus();
    });
  });
});
