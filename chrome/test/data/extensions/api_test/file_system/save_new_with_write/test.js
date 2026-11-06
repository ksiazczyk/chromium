// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Save file test case
// summary: Runs a chrome.test case that saves a new file with chrome.fileSystem.chooseFile and checks the resulting entry.
// ---

chrome.test.runTests([
  function saveFile() {
    chrome.fileSystem.chooseFile(
        {type: 'saveFile'}, chrome.test.callbackPass(function(entry) {
          checkEntry(entry, 'save_new.txt', true, true);
        }));
  },
]);
