// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for browser action close test
// summary: Test extension background script that sets a badge on browser action click and closes the window, signaling readiness to the test harness.
// ---

chrome.browserAction.onClicked.addListener(function(tab) {
  chrome.browserAction.setBadgeText({text: 'X'}, () => {
    window.close();
  });
});

chrome.test.sendMessage('ready');
