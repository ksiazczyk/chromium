// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test for chrome.idle.getAutoLockDelay API
// summary: Runs a browser test asserting that chrome.idle.getAutoLockDelay returns a non-negative integer delay.
// ---

chrome.test.runTests([
  function getAutoLockDelay() {
    chrome.idle.getAutoLockDelay(chrome.test.callbackPass(function(delay) {
      chrome.test.assertTrue(Number.isInteger(delay) && delay >= 0);
    }));
  },
]);
