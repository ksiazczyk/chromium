// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: getDisplayPath prettify test
// summary: Runs a test that chooses an entry and asserts its display path starts with the home directory indicator and contains the file name.
// ---

chrome.test.runTests([
  function getDisplayPath() {
    chrome.fileSystem.chooseEntry(chrome.test.callbackPass(function(entry) {
      chrome.test.assertEq('gold.txt', entry.name);

      // Test that we can get the display path of the file, and that it begins
      // with the home directory indicator (currently '~').
      chrome.fileSystem.getDisplayPath(
          entry, chrome.test.callbackPass(function(path) {
            chrome.test.assertTrue(
                path.indexOf('~/') === 0 ||  // POSIX
                path.indexOf('~\\') === 0);  // Windows
            chrome.test.assertTrue(path.indexOf('gold.txt') >= 0);
          }));
    }));
  },
]);
