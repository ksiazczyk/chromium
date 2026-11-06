// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test choosing an entry and obtaining a writable file entry
// summary: Runs a chrome.test case that chooses writable.txt and verifies chrome.fileSystem.getWritableEntry returns a writable entry with the expected name.
// ---

chrome.test.runTests([
  function getWritableEntry() {
    chrome.fileSystem.chooseEntry(chrome.test.callbackPass(function(entry) {
      chrome.test.assertEq('writable.txt', entry.name);
      // Test that we can get the display path of the file.
      chrome.fileSystem.getWritableEntry(
          entry, chrome.test.callbackPass(function(writable) {
            checkEntry(writable, 'writable.txt', false, true);
          }));
    }));
  },
]);
