// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting requestFileSystem fails after user rejection
// summary: Runs a browser test expecting chrome.fileSystem.requestFileSystem to fail with a security error when the user rejects consent.
// ---

chrome.test.runTests([
  function userRejectedVolume() {
    chrome.fileSystem.requestFileSystem(
        {volumeId: 'testing:read-only'},
        chrome.test.callbackFail('Security error.', function(fileSystem) {
          chrome.test.assertFalse(!!fileSystem);
        }));
  },
]);
