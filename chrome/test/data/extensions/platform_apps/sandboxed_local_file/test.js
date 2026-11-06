// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for sandboxed window test
// summary: Background script that creates a window for the sandboxed main.html on launch and passes the test only when the created window is not returned.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('main.html', {}, function (createdWindow) {
    // 'main.html' is sandboxed, the new window should not be returned.
    if (createdWindow)
      chrome.test.notifyFail();
    else
      chrome.test.notifyPass();
  })
});
