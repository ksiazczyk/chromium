// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test for choosing multiple entries with a suggested name
// summary: Runs a chrome.test case that calls chrome.fileSystem.chooseEntry with acceptsMultiple and a suggested name, then verifies the returned entry.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {suggestedName: 'open_existing.txt', acceptsMultiple: true},
        chrome.test.callbackPass(function(entries) {
          chrome.test.assertEq(1, entries.length);
          checkEntry(entries[0], 'open_existing.txt', false, false);
        }),
    );
  },
]);
