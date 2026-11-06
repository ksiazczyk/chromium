// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting requestFileSystem fails for non-whitelisted components
// summary: Runs a Chrome test expecting chrome.fileSystem.requestFileSystem to fail with a kiosk-session-only error for a non-whitelisted component.
// ---

chrome.test.runTests([
  function readOnlyVolume() {
    chrome.fileSystem.requestFileSystem(
        {volumeId: 'testing:read-only'},
        chrome.test.callbackFail(
            'Operation only supported for kiosk apps ' +
                'running in a kiosk session.',
            function(fileSystem) {
              chrome.test.assertFalse(!!fileSystem);
            }));
  },
]);
