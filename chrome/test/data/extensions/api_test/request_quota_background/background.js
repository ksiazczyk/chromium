// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background page requestQuota test script
// summary: Extension background script that requests one byte of persistent storage quota and reports PASS or FAIL through chrome.test for the browser API test.
// ---

navigator.webkitPersistentStorage.requestQuota(1, pass, fail);

function pass() {
  console.info('PASS');
  if (window.chrome && chrome.test && chrome.test.succeed) {
    chrome.test.succeed();
  }
}

function fail() {
  console.info('FAIL');
  if (window.chrome && chrome.test && chrome.test.fail) {
    chrome.test.fail();
  }
}
