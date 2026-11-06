// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test that chrome.contextMenus is undefined without permission
// summary: Browser test asserting the contextMenus API is unavailable when its permission is not granted.
// ---

const tests = [
  function simple() {
    chrome.test.assertEq(undefined, chrome.contextMenus);
    chrome.test.succeed();
  },
];

chrome.test.runTests(tests);
