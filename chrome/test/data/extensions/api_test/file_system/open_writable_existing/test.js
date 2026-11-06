// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test that openWritableFile requires write permission
// summary: Runs a chrome.test check that choosing an openWritableFile entry fails with an error when the fileSystem.write permission is missing.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'openWritableFile'},
        chrome.test.callbackFail(
            'Operation requires fileSystem.write permission',
            function(entry) {}));
  },
]);
