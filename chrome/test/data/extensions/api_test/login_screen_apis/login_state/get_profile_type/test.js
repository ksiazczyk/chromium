// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: getProfileType browser test script
// summary: Service worker test that calls chrome.loginState.getProfileType() and asserts the returned profile type equals the expected value passed via the test config's custom argument.
// ---

function testGetProfileType(expected) {
  chrome.test.runTests([() => {
    chrome.loginState.getProfileType(profileType => {
      chrome.test.assertNoLastError();
      chrome.test.assertEq(expected, profileType);
      chrome.test.succeed();
    });
  }]);
}

chrome.test.getConfig(config => {
  testGetProfileType(config.customArg);
});
