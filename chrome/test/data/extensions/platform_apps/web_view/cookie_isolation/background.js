// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cookie isolation test app background script
// summary: Creates the main app window when the test platform app is launched.
// ---

function createMainWindow() {
  chrome.app.window.create("window.html", {
    'bounds': {
      'width' : 800,
      'height' : 800
    }
  });
}

chrome.app.runtime.onLaunched.addListener(createMainWindow);
