// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test that no file status change event fires for deleted synced files
// summary: Browser test that registers an onFileStatusChanged listener and expects no fileInfo callback, failing if the deprecated deleted-file event is received.
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
