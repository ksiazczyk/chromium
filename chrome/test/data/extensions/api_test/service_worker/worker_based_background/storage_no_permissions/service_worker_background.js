// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test asserting chrome.storage is undefined
// summary: Runs a test asserting that chrome.storage is undefined when the extension background service worker has no permissions.
// ---

chrome.test.runTests([
  function testStorageUndefined() {
    try {
      chrome.test.assertEq('undefined', typeof (chrome.storage));
      chrome.test.succeed();
    } catch (e) {
      chrome.test.fail(e);
    }
  },
]);
