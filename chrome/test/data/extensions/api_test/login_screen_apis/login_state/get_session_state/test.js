// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser test for chrome.loginState.getSessionState()
// summary: Service worker test that calls chrome.loginState.getSessionState(), asserts no error, and compares the returned session state against the expected value passed via the test config.
// ---

function testGetSessionState(expected) {
  chrome.test.runTests([() => {
    chrome.loginState.getSessionState(sessionState => {
      chrome.test.assertNoLastError();
      chrome.test.assertEq(expected, sessionState);
      chrome.test.succeed();
    });
  }]);
}

chrome.test.getConfig(config => {
  testGetSessionState(config.customArg);
});
