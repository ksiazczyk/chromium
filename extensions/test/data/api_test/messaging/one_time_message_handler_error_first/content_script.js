// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test that sendMessage rejects when first listener throws
// summary: Content script test asserting that chrome.runtime.sendMessage rejects with the thrown sync error when the first registered listener throws before another listener responds.
// ---

chrome.test.runTests([

  // Tests that when multiple listeners are registered for runtime.onMessage
  // and the first registered throws an error, the sender's promise reacts
  // similar to github.com/mozilla/webextension-polyfill.
  async function oneTimeMessageHandlerErrorThrownFirstError() {
    await chrome.test.assertPromiseRejects(
        chrome.runtime.sendMessage('test'), 'Error: sync error');
    chrome.test.succeed();
  },

]);
