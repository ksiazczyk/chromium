// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Chooses a directory and verifies retaining and restoring its entry
// summary: Prompts for an open directory, then retains the entry, checks it is restorable, restores it, and reports the id and entry back to the caller.
// ---

chrome.fileSystem.chooseEntry(
    {type: 'openDirectory'}, chrome.test.callbackPass(function(entry) {
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
