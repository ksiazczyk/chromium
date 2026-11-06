// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Sender test script for external message channel leak
// summary: Sends a message to the receiver extension and asserts the message port closed error, verifying no external channel leaks when the listener returns false.
// ---

chrome.test.getConfig(async (config) => {
  const receiverId = config.customArg;
  chrome.test.runTests([
    // Tests that an external message channel closes if the listener returns
    // false and doesn't reply synchronously.
    function sendMessageExternalNoChannelLeak() {
      chrome.runtime.sendMessage(receiverId, 'ping_leak', (response) => {
        chrome.test.assertLastError(
            'The message port closed before a response was received.');
        chrome.test.succeed();
      });
    },
  ]);
});
