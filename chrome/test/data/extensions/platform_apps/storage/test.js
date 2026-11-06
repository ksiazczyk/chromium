// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: localStorage disallowed test script
// summary: Background script running a Chrome test that asserts window.localStorage is unavailable in platform apps.
// ---

function assertContains(string, substring, error) {
  chrome.test.assertNe(-1, string.indexOf(substring), error);
}

chrome.test.runTests([
  function testLocalStorage() {
    chrome.test.assertTrue(!window.localStorage);
    chrome.test.succeed();
  }
]);
