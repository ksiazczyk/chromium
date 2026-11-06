// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: onLaunched event test background script
// summary: Background script that listens for the app launch event and notifies the test harness that the app launched and the test passed.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.test.sendMessage('Launched');
  chrome.test.notifyPass();
});
