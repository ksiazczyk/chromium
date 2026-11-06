// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting the chosen file entry is not writable
// summary: Runs a Chrome test that chooses writable.txt and asserts chrome.fileSystem.isWritableEntry reports it as not writable without the fileSystem.write permission.
// ---

chrome.test.runTests([
  function isNotWritableEntry() {
    chrome.fileSystem.chooseEntry(chrome.test.callbackPass(function(entry) {
      chrome.test.assertEq('writable.txt', entry.name);
      // The file should not be writable, since we do not have the
      // fileSystem.write permission.
      chrome.fileSystem.isWritableEntry(
          entry, chrome.test.callbackPass(function(isWritable) {
            chrome.test.assertFalse(isWritable);
          }));
    }));
  },
]);
