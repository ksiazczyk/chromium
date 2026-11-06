// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting chooseEntry throws for an invalid type
// summary: Runs a chrome.test case verifying that chrome.fileSystem.chooseEntry with an invalid type throws instead of succeeding.
// ---

chrome.test.runTests([
  function saveFile() {
    try {
      chrome.fileSystem.chooseEntry({type: 'invalid'}, function() {});
      // Should not reach this line since the above call throws.
      chrome.test.fail();
    } catch (ex) {
    }
    chrome.test.succeed();
  },
]);
