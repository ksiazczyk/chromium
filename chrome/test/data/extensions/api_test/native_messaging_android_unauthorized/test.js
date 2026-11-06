// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test for unauthorized native messaging rejection on Android
// summary: Browser test that expects sendNativeMessage to reject with an unauthorized-access error when the extension attempts to message the Chromium test support app.
// ---

chrome.test.runTests([
  async function testUnauthorizedExtension() {
    const APP_NAME = 'org.chromium.chrome.tests.support';
    const expectedError =
        'Error: Access to native messaging is unauthorized for this extension.';

    await chrome.test.assertPromiseRejects(
        chrome.runtime.sendNativeMessage(APP_NAME, {text: 'hello'}),
        expectedError);
    chrome.test.succeed();
  },
]);
