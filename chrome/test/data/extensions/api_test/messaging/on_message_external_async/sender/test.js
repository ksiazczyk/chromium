// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Sender test for async external message responses
// summary: Service worker test that sends a message to an external extension and asserts the listener responds asynchronously with pong_async.
// ---

chrome.test.getConfig(async (config) => {
  const receiverId = config.customArg;
  chrome.test.runTests([
    // Tests that an external message listener can respond asynchronously using
    // true.
    async function sendMessageExternalAsync() {
      const response =
          await chrome.runtime.sendMessage(receiverId, 'ping_async');
      chrome.test.assertEq({response: 'pong_async'}, response);
      chrome.test.succeed();
    },
  ]);
});
