// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting saveFile needs the write permission
// summary: Runs a chrome.test case expecting chrome.fileSystem.chooseEntry with type saveFile to fail when the fileSystem.write permission is missing.
// ---

chrome.test.runTests([
  function saveFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'saveFile'},
        chrome.test.callbackFail(
            'Operation requires fileSystem.write permission', function() {}));
  },
]);
