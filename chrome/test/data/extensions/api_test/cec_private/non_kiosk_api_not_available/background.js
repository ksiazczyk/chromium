// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: cecPrivate not available outside kiosk mode test script
// summary: Background script that runs a test asserting the chrome.cecPrivate API is undefined when the extension runs outside kiosk mode.
// ---

chrome.test.runTests([
  function ensureCecPrivateNotDefined() {
    chrome.test.assertTrue(typeof chrome.cecPrivate === 'undefined');
    chrome.test.succeed();
  },
]);
