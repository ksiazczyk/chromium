// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: DOM storage isolation test app launcher
// summary: Entry point script that opens the test app window when the platform app is launched.
// ---

function createWindow() {
  chrome.app.window.create('window.html', {
    'bounds': {
      'width': 400,
      'height': 400
    }
  });
}
chrome.app.runtime.onLaunched.addListener(createWindow);
