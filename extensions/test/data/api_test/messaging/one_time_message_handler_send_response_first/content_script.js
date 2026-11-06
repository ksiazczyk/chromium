// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script test for response before later listener error
// summary: Runs a browser test asserting that sendMessage resolves with the first listener's response even when a later registered listener throws a synchronous error.
// ---

chrome.test.runTests([

  // Tests that when multiple listeners are registered for runtime.onMessage and
  // the first registered responds synchronously and a later one throws an
  // error, the sender's promise resolves with the response similar to
  // github.com/mozilla/webextension-polyfill.
  async function oneTimeMessageHandlerSendResponseFirstBeforeError() {
    const response = await chrome.runtime.sendMessage('test');
    chrome.test.assertEq('response from listener', response);
    chrome.test.succeed();
  },

]);
