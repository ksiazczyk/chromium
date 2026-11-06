// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Note: all tests cases that return a promise from the listener are validating
// that the behavior matches the behavior of
// https://github.com/mozilla/webextension-polyfill.

// ---docerion
// type: test
// title: Content script test for faster promise response
// summary: Runs a browser test asserting that when a promise-returning listener and a return-true listener coexist, the faster promise response is delivered.
// ---

chrome.test.runTests([

  // Tests that when the first listener returns a promise and the second returns
  // true, the faster promise response is used to send the response.
  async function onMessageMultiPromiseResolve() {
    const response = await chrome.runtime.sendMessage('test');
    chrome.test.assertEq('faster promise', response);
    chrome.test.succeed();
  },

]);
