// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Enterprise platformKeys API not available test
// summary: Browser test that asserts the chrome.enterprise.platformKeys API is not available to the extension, succeeding when either chrome.enterprise or platformKeys is undefined.
// ---

chrome.test.runTests([
  function notAvailable() {
    chrome.test.assertTrue(
        !chrome.enterprise || !chrome.enterprise.platformKeys);
    chrome.test.succeed();
  },
]);
