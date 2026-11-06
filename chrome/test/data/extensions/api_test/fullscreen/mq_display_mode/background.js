// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script launching the test app window
// summary: Launches the test app window by creating window.html when the Chrome App runtime fires onLaunched.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('window.html');
});
