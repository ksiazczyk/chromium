// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Note: all tests cases that return a promise from the listener are validating
// that the behavior matches the behavior of
// https://github.com/mozilla/webextension-polyfill.

// ---docerion
// type: test
// title: Content script asserting the faster sendResponse response
// summary: Runs a chrome.test case asserting that when one listener returns a promise and another returns true, the faster sendResponse value is delivered.
// ---

chrome.test.runTests([

  // Tests that when the first listener returns a promise and the second returns
  // true, the faster sendResponse response is used to send the response.
  async function onMessageMultiPromiseResolve() {
    const response = await chrome.runtime.sendMessage('test');
    chrome.test.assertEq('faster sendResponse', response);
    chrome.test.succeed();
  },

]);
