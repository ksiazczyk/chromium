// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for getVolumeList not-kiosk-session test
// summary: Runs a test asserting that chrome.fileSystem.getVolumeList fails with a kiosk-only error when not running in a kiosk session.
// ---

chrome.test.runTests([
  function getVolumeList() {
    chrome.fileSystem.getVolumeList(chrome.test.callbackFail(
        'Operation only supported for kiosk apps ' +
            'running in a kiosk session.',
        function(volumeList) {
          chrome.test.assertFalse(!!volumeList);
        }));
  },
]);
