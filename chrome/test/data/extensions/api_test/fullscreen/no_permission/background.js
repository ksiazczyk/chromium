// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the fullscreen no-permission test app
// summary: Launches the test app's window when the app starts, serving as the background script of the no-permission fullscreen API test.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('window.html');
});
