// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Demo app background script
// summary: Background script for the ChromeOS demo app test that opens the app's main page in a fullscreen window when the app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('html/main.html', {'state': 'fullscreen'});
});
