// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script test for sync listener called first
// summary: Sends a runtime message and asserts the asynchronous listener's response is returned even though a synchronous listener registered first.
// ---

chrome.test.runTests([

  // Tests that an sync listener registering first will still provide it's
  // response to the message sender.
  async function sendMessageWithSyncListenerCalledFirstPromise() {
    const response = await chrome.runtime.sendMessage('');
    chrome.test.assertEq('Async response from background script', response);
    chrome.test.succeed();
  },

]);
