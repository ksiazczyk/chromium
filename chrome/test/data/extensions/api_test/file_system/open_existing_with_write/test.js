// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test that chrome.fileSystem.chooseEntry opens an existing file
// summary: Runs the API test that opens an existing file via chooseEntry and verifies the returned entry.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(chrome.test.callbackPass(function(entry) {
      checkEntry(entry, 'open_existing.txt', false, true);
    }));
  },
]);
