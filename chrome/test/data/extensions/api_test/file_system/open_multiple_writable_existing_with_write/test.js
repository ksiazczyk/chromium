// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test opening multiple existing writable files
// summary: Runs a chrome.test case that uses chrome.fileSystem.chooseEntry with acceptsMultiple to open two writable files and verifies their names and order.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {acceptsMultiple: true, type: 'openWritableFile'},
        chrome.test.callbackPass(function(entries) {
          chrome.test.assertEq(2, entries.length);
          // Ensure entry names are in sort order: crbug.com/40704469
          if (entries[0].name === 'open_existing2.txt') {
            entries = [entries[1], entries[0]];
          }
          checkEntry(entries[0], 'open_existing1.txt', false, true);
          checkEntry(entries[1], 'open_existing2.txt', false, true);
        }),
    );
  },
]);
