// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chooseEntry multiple files test
// summary: Runs the test that opens two existing files with chrome.fileSystem.chooseEntry using acceptsMultiple and verifies entry names in sort order.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {acceptsMultiple: true},
        chrome.test.callbackPass(function(entries) {
          chrome.test.assertEq(2, entries.length);
          // Ensure entry names are in sort order: crbug.com/40704469
          if (entries[0].name === 'open_existing2.txt') {
            entries = [entries[1], entries[0]];
          }
          checkEntry(entries[0], 'open_existing1.txt', false, false);
          checkEntry(entries[1], 'open_existing2.txt', false, false);
        }),
    );
  },
]);
