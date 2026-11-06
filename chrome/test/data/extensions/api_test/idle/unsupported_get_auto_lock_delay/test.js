// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test asserting chrome.idle.getAutoLockDelay is undefined
// summary: Service worker test that verifies chrome.idle.getAutoLockDelay is undefined on unsupported OSes and reports success.
// ---

chrome.test.runTests([
  function UnsupportedGetAutoLockDelay() {
    chrome.test.assertTrue(chrome.idle.getAutoLockDelay === undefined);
    chrome.test.succeed();
  },
]);
