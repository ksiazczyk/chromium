// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for syncFileSystem onServiceStatusChanged event
// summary: Registers a listener for the onServiceStatusChanged event and fails the test if it fires, verifying the deprecated feature no longer emits events.
// ---

function setupListener() {
  chrome.syncFileSystem.onServiceStatusChanged.addListener(checkEventReceived);
  chrome.syncFileSystem.requestFileSystem(function() {});
  chrome.test.getConfig(function(config) {
    setTimeout(function() {
      chrome.test.succeed();
    }, 10000);
  });
}

function checkEventReceived(serviceInfo) {
  chrome.test.fail('Feature deprecated. Should not receive event');
}

chrome.test.runTests([
  setupListener,
]);
