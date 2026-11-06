// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test app background launch script
// summary: Background script that listens for app launch and creates a window using options supplied by the test.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.sendMessage('launched', function(reply) {
    // Create window options defined in tests.
    const options = JSON.parse(reply);
    chrome.app.window.create('index.html', options, function() {});
  });
});
