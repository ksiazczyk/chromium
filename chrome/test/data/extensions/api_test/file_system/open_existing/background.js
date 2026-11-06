// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background page for the open existing file test app
// summary: Launches the test app window by opening test.html when the app runtime fires onLaunched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
