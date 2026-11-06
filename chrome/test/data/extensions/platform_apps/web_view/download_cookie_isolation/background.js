// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test app background script
// summary: Background script that opens the main test window when the platform app is launched.
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
