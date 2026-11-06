// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the chrome.fileSystem open cancel test app
// summary: Launches the test page when the test app starts, as part of the chrome.fileSystem chooseEntry cancellation test.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
