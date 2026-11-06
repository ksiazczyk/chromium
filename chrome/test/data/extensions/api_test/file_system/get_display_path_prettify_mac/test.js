
// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: getDisplayPath prettify test on Mac
// summary: Chrome test verifying that getDisplayPath strips the .localized suffix so the displayed path ends with /test/gold.txt.
// ---

chrome.test.runTests([
  function getDisplayPath() {
    chrome.fileSystem.chooseFile(chrome.test.callbackPass(function(entry) {
      chrome.test.assertEq('gold.txt', entry.name);

      // The on-disk path of this file ends with '/test.localized/gold.txt', so
      // check that getDisplayPath correctly localizes the path by stripping
      // the '.localized' suffix.
      chrome.fileSystem.getDisplayPath(
          entry, chrome.test.callbackPass(function(path) {
            const suffix = '/test/gold.txt';
            chrome.test.assertEq(
                suffix, path.substring(path.length - suffix.length));
          }));
    }));
  },
]);
