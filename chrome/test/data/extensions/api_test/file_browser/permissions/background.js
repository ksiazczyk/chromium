// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the fileManagerPrivate permission test
// summary: Runs a browser test asserting that chrome.fileManagerPrivate is not exposed to non-whitelisted extension apps.
// ---

chrome.test.runTests([
  function permissions() {
    chrome.test.assertFalse(!!chrome.fileManagerPrivate);
    chrome.test.succeed();
  },
]);
