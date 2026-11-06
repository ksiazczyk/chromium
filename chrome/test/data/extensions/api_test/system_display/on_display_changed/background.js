// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the onDisplayChanged extension test
// summary: Extension background script that listens once for the chrome.system.display.onDisplayChanged event and reports success as part of the system.display API test.
// ---

chrome.test.runTests([
  function waitForDisplayChangedEvent() {
    chrome.test.listenOnce(chrome.system.display.onDisplayChanged, function() {
      chrome.test.sendMessage('success');
    });
  },
]);

chrome.test.sendMessage('ready');
