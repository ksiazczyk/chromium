// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Note: all tests cases that return a promise from the listener are validating
// that the behavior matches the behavior of
// https://github.com/mozilla/webextension-polyfill.

// ---docerion
// type: test
// title: Content script test for multi-promise onMessage response
// summary: Runs a chrome.test case asserting the sender receives the response from the first promise to resolve when multiple listeners return promises.
// ---

chrome.test.runTests([

  // Tests that when multiple listeners return promises, the sender receives a
  // response from the first promise to resolve. Even if the faster promise is
  // registered first.
  async function onMessageMultiPromiseResolve() {
    const response = await chrome.runtime.sendMessage('test');
    chrome.test.assertEq('faster promise', response);
    chrome.test.succeed();
  },

]);
