// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chrome.fileSystem.getDisplayPath API test
// summary: Runs a Chrome test that picks a file entry and asserts getDisplayPath returns a path containing file_system and gold.txt.
// ---

chrome.test.runTests([
  function getDisplayPath() {
    chrome.fileSystem.chooseEntry(chrome.test.callbackPass(function(entry) {
      chrome.test.assertEq('gold.txt', entry.name);
      // Test that we can get the display path of the file.
      chrome.fileSystem.getDisplayPath(
          entry, chrome.test.callbackPass(function(path) {
            chrome.test.assertTrue(path.indexOf('file_system') >= 0);
            chrome.test.assertTrue(path.indexOf('gold.txt') >= 0);
          }));
    }));
  },
]);
