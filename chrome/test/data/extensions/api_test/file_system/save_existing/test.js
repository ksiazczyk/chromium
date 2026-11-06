// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Save existing file test
// summary: Verifies that choosing a save file entry without the fileSystem.write permission fails with the expected error.
// ---

chrome.test.runTests([
  function saveFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'saveFile'},
        chrome.test.callbackFail(
            'Operation requires fileSystem.write permission', function() {}));
  },
]);
