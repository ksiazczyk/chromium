// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for deprecated onFileStatusChanged events
// summary: Listens for chrome.syncFileSystem.onFileStatusChanged events, fails if fileInfo is received, and succeeds after a timeout to confirm the deprecated behavior.
// ---

function setupListener() {
  chrome.syncFileSystem.onFileStatusChanged.addListener(fileInfoReceived);
  chrome.syncFileSystem.requestFileSystem(function() {});
  chrome.test.getConfig(function(config) {
    setTimeout(function() {
      // `fileInfo` not received.
      chrome.test.succeed();
    }, 10000);
  });
}

function fileInfoReceived(fileInfo) {
  chrome.test.fail('Feature deprecated. Should not receive fileInfo');
}

chrome.test.runTests([
  setupListener,
]);
