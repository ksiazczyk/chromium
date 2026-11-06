// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test expecting directory open to fail without permission
// summary: Runs a chrome.test case asserting that chooseEntry with openDirectory fails with the fileSystem.directory permission error.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'openDirectory'},
        chrome.test.callbackFail(
            'Operation requires fileSystem.directory permission',
            function(entry) {}));
  },
]);
