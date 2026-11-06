// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the requestFileSystem not-allowed component test app
// summary: Launches the test page when the Chrome App starts, as part of the chrome.fileSystem.requestFileSystem API test fixture.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
