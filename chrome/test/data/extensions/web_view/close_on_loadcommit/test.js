// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Close on loadcommit test background script
// summary: Repeatedly creates and closes the app window to exercise webview close-on-loadcommit behavior, signaling LAUNCHED and done messages to the test harness.
// ---

let createCount = 0;

const launchWindow = function() {
  chrome.app.window.create('main.html', {}, function(win) {
    if (createCount === 0) {
      chrome.test.sendMessage('LAUNCHED');
    }
    if (createCount < 3) {
      ++createCount;
      chrome.test.log('Attempt no #' + createCount);
      win.close();
      launchWindow();
    } else {
      chrome.test.sendMessage('done-close-on-loadcommit');
    }
  });
};

chrome.app.runtime.onLaunched.addListener(function() {
  launchWindow();
});
