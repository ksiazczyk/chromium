// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GCM register incognito browser test
// summary: Browser test that calls chrome.gcm.register and asserts the registration result error matches whether the extension runs in an incognito context.
// ---

chrome.test.runTests([
  function testIncognito() {
    chrome.gcm.register(['Sender'], function(registrationId) {
      chrome.test.assertEq(
          chrome.runtime.lastError !== undefined,
          chrome.extension.inIncognitoContext);
      chrome.test.succeed();
    });
  },
]);
