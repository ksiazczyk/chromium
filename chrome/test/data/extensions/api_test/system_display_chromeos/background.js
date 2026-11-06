// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the system.display onDisplayChanged test
// summary: Test extension background script that listens once for the system.display onDisplayChanged event and signals success to the test harness.
// ---

chrome.test.runTests([
  function waitForDisplayChangedEvent() {
    chrome.test.listenOnce(chrome.system.display.onDisplayChanged, function() {
      chrome.test.sendMessage('success');
    });
  },
]);

chrome.test.sendMessage('ready');
