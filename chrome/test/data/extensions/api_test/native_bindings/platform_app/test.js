// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the platform app test
// summary: Creates the app window on launch and verifies the onClosed event from custom bindings fires when the window is closed.
// ---

let appWindow;

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('main.html', {}, function(win) {
    appWindow = win;
  });
});

chrome.test.sendMessage('ready', function() {
  try {
    // The onClosed event is dispatched by a call to the internal
    // onAppWindowClosed method in the app.window custom bindings. Getting this
    // event signals that we can call into methods of custom bindings modules
    // for APIs.
    appWindow.onClosed.addListener(function() {
      chrome.test.sendMessage('success');
    });
    appWindow.close();
  } catch (e) {
    chrome.test.sendMessage('failure: ' + e);
  }
});
