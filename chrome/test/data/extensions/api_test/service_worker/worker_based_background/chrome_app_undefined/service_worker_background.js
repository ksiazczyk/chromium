// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker test asserting chrome.app is undefined
// summary: Service worker background script that runs a test asserting chrome.app is undefined for service worker-based extensions.
// ---

// Test that chrome.app is not defined for service worker-based extensions.
chrome.test.runTests([
  function testChromeAppBinding() {
    chrome.test.assertTrue(chrome.app === undefined);
    chrome.test.succeed();
  },
]);
