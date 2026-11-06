// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting requestFileSystem fails off Chrome OS
// summary: Runs a chrome.test check that requesting a read-only volume via requestFileSystem fails with an unsupported-platform error when not on Chrome OS.
// ---

chrome.test.runTests([
  function readOnlyVolume() {
    chrome.fileSystem.requestFileSystem(
        {volumeId: 'testing:read-only'},
        chrome.test.callbackFail(
            'Operation not supported on the current ' +
                'platform.',
            function(fileSystem) {
              chrome.test.assertFalse(!!fileSystem);
            }));
  },
]);
