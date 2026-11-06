// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Findability isolation test app entry point
// summary: Launches the test app window via chrome.app.window.create when the app runtime fires onLaunched.
// ---

function createWindow() {
  chrome.app.window.create('window.html', {
    bounds: {
      width: 400,
      height: 400
    }
  });
}
chrome.app.runtime.onLaunched.addListener(createWindow);
