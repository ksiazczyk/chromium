// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test opening an existing file as writable via chooseEntry
// summary: Runs the chrome.test suite that calls chooseEntry with openWritableFile and checks the resulting entry of open_existing.txt.
// ---

chrome.test.runTests([
  function openFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'openWritableFile'}, chrome.test.callbackPass(function(entry) {
          checkEntry(entry, 'open_existing.txt', false, true);
        }));
  },
]);
