// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// browser_tests --gtest_filter=ExtensionApiTest.OpenOptionsPageError

// ---docerion
// type: test
// title: openOptionsPage error case test script
// summary: Service worker test that calls chrome.runtime.openOptionsPage and asserts it fails with 'Could not create an options page.' when none is defined.
// ---

function test() {
  chrome.runtime.openOptionsPage(
      chrome.test.callbackFail('Could not create an options page.'));
}

chrome.test.runTests([test]);
