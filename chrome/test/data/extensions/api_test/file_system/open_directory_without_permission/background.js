// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the fileSystem test app
// summary: Starts the test app by opening test.html in a window when the app runtime fires onLaunched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
