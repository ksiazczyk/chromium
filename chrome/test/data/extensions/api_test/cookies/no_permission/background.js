// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cookies no-permission test background script
// summary: Background script for the no-permission extension API test that asserts chrome.cookies is undefined when the cookies permission is not granted.
// ---

chrome.test.runTests([
  function readCookies() {
    chrome.test.assertEq(undefined, chrome.cookies);
    chrome.test.succeed();
  },
]);
