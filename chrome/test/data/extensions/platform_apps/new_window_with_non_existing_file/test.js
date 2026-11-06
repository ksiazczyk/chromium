// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script creating an app window from a non-existing file
// summary: Listens for the app launch event and expects chrome.app.window.create('not_found.html') to fail, notifying pass or fail accordingly.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('not_found.html', {}, function (createdWindow) {
    if (createdWindow)
      chrome.test.notifyFail();
    else
      chrome.test.notifyPass();
  })
});
