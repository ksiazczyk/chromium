// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for chrome.test assertEq API tests
// summary: Runs browser tests verifying that chrome.test.assertEq handles null arguments without crashing and reports the expected failure messages.
// ---

chrome.test.runTests([
  // TODO(battre, mkwst): add more tests.

  function testAssertEq() {
    const chromeTestFail = chrome.test.fail;
    let messages = '';
    chrome.test.fail = function(message) {
      messages += '\n' + message;
    };

    // Check that assertEq(..., null) doesn't crash.
    chrome.test.assertEq({test: 1}, null);

    // Check that assertEq(null, ...) doesn't crash.
    chrome.test.assertEq(null, {test: 1});

    chrome.test.fail = chromeTestFail;
    chrome.test.assertEq(
        '\nAPI Test Error in testAssertEq\n' +
            '{"test":1} did not deep-equal null\n' +
            'API Test Error in testAssertEq\n' +
            'null did not deep-equal {"test":1}',
        messages);
    chrome.test.notifyPass();
  },
]);
