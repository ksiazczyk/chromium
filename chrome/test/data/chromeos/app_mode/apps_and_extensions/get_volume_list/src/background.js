// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GetVolumeList kiosk session test background script
// summary: Runs a Chrome browser test asserting that chrome.fileSystem.getVolumeList returns the expected writable and read-only volumes in a kiosk session, with Drive excluded.
// ---

chrome.test.runTests([
  function getVolumeList() {
    chrome.fileSystem.getVolumeList(
        chrome.test.callbackPass(function(volumeList) {
          // Drive is not exposed in kiosk session.
          chrome.test.assertEq(2, volumeList.length);
          chrome.test.assertTrue(/^downloads:.*/.test(volumeList[0].volumeId));
          chrome.test.assertTrue(volumeList[0].writable);
          chrome.test.assertEq(
              'system_internal:ShareCache', volumeList[1].volumeId);
          chrome.test.assertFalse(volumeList[1].writable);
        }));
  }
]);
