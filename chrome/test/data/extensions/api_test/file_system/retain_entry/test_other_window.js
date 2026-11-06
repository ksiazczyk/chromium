// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Entry chooser helper for the retainEntry test
// summary: Chooses a file entry, retains and restores its ID to verify restorability, and reports back to the main test.
// ---

chrome.fileSystem.chooseEntry(
    {type: 'openFile'}, chrome.test.callbackPass(function(entry) {
      const id = chrome.fileSystem.retainEntry(entry);
      chrome.test.assertNe(null, id);
      chrome.fileSystem.isRestorable(
          id, chrome.test.callbackPass(function(isRestorable) {
            chrome.test.assertTrue(isRestorable);
          }));
      chrome.fileSystem.restoreEntry(
          id, chrome.test.callbackPass(function(restoredEntry) {
            chrome.test.assertEq(restoredEntry, entry);
          }));
      callback(id, entry);
    }));
