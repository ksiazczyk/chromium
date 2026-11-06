// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test saving an existing file with chrome.fileSystem
// summary: Runs a Chrome test that chooses a save file entry and checks it is the existing save_existing.txt and is writable.
// ---

chrome.test.runTests([
  function saveFile() {
    chrome.fileSystem.chooseEntry(
        {type: 'saveFile'}, chrome.test.callbackPass(function(entry) {
          checkEntry(entry, 'save_existing.txt', false, true);
        }));
  },
]);
