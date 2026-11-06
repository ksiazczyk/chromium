// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test listening for session state changes
// summary: JavaScript browser test that adds a listener to chrome.loginState.onSessionStateChanged, asserts no last error, and reports the received session state back to the test harness.
// ---

chrome.test.runTests([
  function testOnSessionStateChanged() {
    chrome.loginState.onSessionStateChanged.addListener(sessionState => {
      chrome.test.assertNoLastError();
      chrome.test.sendMessage(sessionState);
    });
    chrome.test.succeed();
  },
]);
