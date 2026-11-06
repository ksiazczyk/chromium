// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test that requestFileSystem fails outside a kiosk session
// summary: Verifies that chrome.fileSystem.requestFileSystem fails with a kiosk-only error when the app is not running in a kiosk session.
// ---

chrome.test.runTests([
  function readOnlyVolume() {
    chrome.fileSystem.requestFileSystem(
        {volumeId: 'testing:read-only'},
        chrome.test.callbackFail(
            'Operation only supported for kiosk apps ' +
                'running in a kiosk session.',
            function(fs) {}));
  },
]);
