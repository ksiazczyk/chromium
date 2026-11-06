// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script launching the test app window
// summary: Opens test.html in an app window when the app runtime launches, serving as the entry point for the fileSystem API test app.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
