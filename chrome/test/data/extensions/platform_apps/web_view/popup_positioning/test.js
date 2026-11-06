// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Webview popup positioning test app launcher
// summary: Background script that opens main.html in a 400x400 app window positioned near the top-left of the screen when the test app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('main.html', {
    innerBounds: {
      width: 400,
      height: 400
    },
    outerBounds: {
      // Prefer close to top left on screen so we have enough space for
      // rendering popup.
      left: 20,
      top: 20
    }
  }, function (win) {});
});
