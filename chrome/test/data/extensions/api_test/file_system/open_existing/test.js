// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test opening an existing file with chrome.fileSystem.chooseEntry
// summary: Runs a test that opens open_existing.txt via chrome.fileSystem.chooseEntry and verifies the returned entry.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {suggestedName: 'open_existing.txt'},
        chrome.test.callbackPass(function(entry) {
          checkEntry(entry, 'open_existing.txt', false, false);
        }),
    );
  },
]);
