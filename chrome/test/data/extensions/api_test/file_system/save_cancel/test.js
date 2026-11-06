// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting a cancelled save dialog reports user cancellation
// summary: Runs a chrome.test check that cancelling the chrome.fileSystem save dialog fails with the expected user cancelled error.
// ---

chrome.test.runTests([
  function saveFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'saveFile'},
        chrome.test.callbackFail('User cancelled', function(entry) {}));
  },
]);
