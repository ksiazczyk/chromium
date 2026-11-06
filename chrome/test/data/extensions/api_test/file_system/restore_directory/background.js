// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script launching the restoreEntry test app window
// summary: Launches test.html in a Chrome app window when the app runtime fires onLaunched, starting the restoreEntry test.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('test.html');
});
