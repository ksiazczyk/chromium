// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test expecting user cancelled error for directory selection
// summary: Runs a chrome.fileSystem.chooseEntry openDirectory test that expects a 'User cancelled' failure callback.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'openDirectory'}, chrome.test.callbackFail('User cancelled'));
  },
]);
