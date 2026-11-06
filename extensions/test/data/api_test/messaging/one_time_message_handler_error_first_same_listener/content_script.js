// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script test for one-time message handler errors
// summary: "Runs a test asserting that chrome.runtime.sendMessage rejects with 'Error: sync error' when the single onMessage listener throws, mirroring the webextension-polyfill behavior."
// ---

chrome.test.runTests([

  // Tests that when a single listener is registered for runtime.onMessage and
  // it throws an error the sender's promise reacts similar to
  // github.com/mozilla/webextension-polyfill.
  async function oneTimeMessageHandlerListenerErrors() {
    await chrome.test.assertPromiseRejects(
        chrome.runtime.sendMessage('test'), 'Error: sync error');
    chrome.test.succeed();
  },

]);
