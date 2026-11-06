// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test expecting saveFile to reject acceptsMultiple
// summary: Runs a chrome.test case asserting that chooseEntry with type saveFile and acceptsMultiple true fails.
// ---

chrome.test.runTests([
  function saveFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'saveFile', acceptsMultiple: true},
        chrome.test.callbackFail(
            'acceptsMultiple: true is only supported for \'openFile\''));
  },
]);
