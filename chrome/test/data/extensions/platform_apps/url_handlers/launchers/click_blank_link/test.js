// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script opening the launcher main window
// summary: Background script that listens for the app launch event and opens main.html when the launcher app starts in the test.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('main.html', {}, function () {});
});
