// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test that opening a directory fails with only write permission
// summary: Runs a test asserting that chooseEntry with openDirectory fails when only the fileSystem write permission is granted.
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
