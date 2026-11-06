// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test app background script opening the test page on launch
// summary: Background script for the test app that creates a window loading test.html when the app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
