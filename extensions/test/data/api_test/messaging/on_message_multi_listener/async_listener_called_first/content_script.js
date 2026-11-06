// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script test for async listener response
// summary: Runs a chrome.test case that sends a runtime message and asserts the response comes from the asynchronously registered listener that was registered first.
// ---

chrome.test.runTests([

  // Tests that an async listener registering first will still provide it's
  // response to the message sender.
  async function sendMessageWithAsyncListenerCalledFirst() {
    const response = await chrome.runtime.sendMessage('');
    chrome.test.assertEq('Async response from background script', response);
    chrome.test.succeed();
  },

]);
