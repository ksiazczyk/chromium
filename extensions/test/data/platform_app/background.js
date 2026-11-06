// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script of the test platform app
// summary: Launches the app window with hello.html when the Chrome platform app is started during extension tests.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('hello.html', {
    'innerBounds': {
      'width': 400,
      'height': 300
    }
  });
});
