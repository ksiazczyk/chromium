// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Retain entry test app background script
// summary: Launches the test.html window when the test Chrome app is started via the app runtime onLaunched event.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
