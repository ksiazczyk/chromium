// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Platform app test background script
// summary: Background script for the test platform app that opens hello.html in a 400x300 app window when the app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('hello.html', {
    'innerBounds': {
      'width': 400,
      'height': 300,
    },
  });
});
