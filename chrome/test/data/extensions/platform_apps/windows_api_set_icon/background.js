// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the setIcon window test app
// summary: Background script that opens test.html on app launch and calls win.setIcon with icon.png to exercise the windows setIcon API in browser tests.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html', {}, function(win) {
    chrome.test.sendMessage('ready', function() {
      win.setIcon("icon.png");
    });
  });
});
