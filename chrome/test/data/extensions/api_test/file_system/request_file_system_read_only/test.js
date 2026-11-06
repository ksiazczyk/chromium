// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Tests for chrome.fileSystem.requestFileSystem with read-only volumes
// summary: Runs tests requesting file systems for read-only and writable volumes and asserting valid FileSystem results.
// ---

chrome.test.runTests([
  function readOnlyVolume() {
    chrome.fileSystem.requestFileSystem(
        {volumeId: 'testing:read-only'},
        chrome.test.callbackPass(function(fileSystem) {
          chrome.test.assertFalse(!!chrome.runtime.lastError);
          chrome.test.assertTrue(!!fileSystem);
        }));
  },
  function writableVolume() {
    // Requesting a read-only access to a writable volume is correct and should
    // return a valid FileSystem object.
    chrome.fileSystem.requestFileSystem(
        {volumeId: 'testing:writable'},
        chrome.test.callbackPass(function(fileSystem) {
          chrome.test.assertFalse(!!chrome.runtime.lastError);
          chrome.test.assertTrue(!!fileSystem);
        }));
  },
]);
