// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting requestFileSystem succeeds for a read-only volume
// summary: Runs a Chrome test that calls chrome.fileSystem.requestFileSystem for the read-only testing volume and asserts a file system is returned.
// ---

chrome.test.runTests([
  function readOnlyVolume() {
    chrome.fileSystem.requestFileSystem(
        {volumeId: 'testing:read-only'},
        chrome.test.callbackPass(function(fileSystem) {
          chrome.test.assertTrue(!!fileSystem);
        }));
  },
]);
