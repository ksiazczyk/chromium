// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script test for promise-resolve-first messaging behavior
// summary: Asserts that sendMessage rejects with the synchronous error when the first listener's promise resolves and a later listener throws, mimicking the webextension-polyfill behavior.
// ---

chrome.test.runTests([

  // Tests that when multiple listeners are registered for runtime.onMessage and
  // the first registered listener returns a promise that resolves, and the
  // second registered listener throws a synchronous error, the error is chosen
  // as the response to the sender. This is because the synchronous error will
  // always be detected first before another spin of the JS context can resolve
  // the promise. This mimics the behavior of
  // github.com/mozilla/webextension-polyfill.
  async function oneTimeMessageHandlerPromiseResolveFirst() {
    await chrome.test.assertPromiseRejects(
        chrome.runtime.sendMessage('test'), 'Error: sync error');
    chrome.test.succeed();
  },

]);
