// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: chrome.fileSystem.restoreEntry API test
// summary: Verifies isRestorable and restoreEntry for a valid retained entry ID and checks that an unknown ID fails with an error.
// ---

chrome.test.runTests([
  function restoreEntryWorks() {
    const id = 'magic id';
    chrome.fileSystem.isRestorable(
        id, chrome.test.callbackPass(function(isRestorable) {
          chrome.test.assertTrue(isRestorable);
        }));
    chrome.fileSystem.restoreEntry(
        id, chrome.test.callbackPass(function(restoredEntry) {
          chrome.test.assertNe(null, restoredEntry);
          chrome.test.assertEq(
              chrome.fileSystem.retainEntry(restoredEntry), id);
          checkEntry(
              restoredEntry, 'writable.txt', false /* isNew */,
              true /*shouldBeWritable */);
        }));
    chrome.fileSystem.isRestorable(
        'wrong id', chrome.test.callbackPass(function(isRestorable) {
          chrome.test.assertFalse(isRestorable);
        }));
    chrome.fileSystem.restoreEntry(
        'wrong id', chrome.test.callbackFail('Unknown id'));
  },
]);
