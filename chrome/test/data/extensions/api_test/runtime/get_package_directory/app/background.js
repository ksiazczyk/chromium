// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the getPackageDirectoryEntry test app
// summary: Background script that opens the test window when the packaged app is launched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('window/test.html');
});
