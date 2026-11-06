// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting chooseEntry fails with User cancelled
// summary: Runs a chrome.test case expecting chrome.fileSystem.chooseEntry to fail with 'User cancelled' when the file picker is dismissed.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        chrome.test.callbackFail('User cancelled', function(entry) {}));
  },
]);
