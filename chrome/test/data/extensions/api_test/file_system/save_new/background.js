// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: App background script for the fileSystem save test
// summary: Background script that opens test.html when the test app is launched, as part of the chrome.fileSystem save new file API test.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
