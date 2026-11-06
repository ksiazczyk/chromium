// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Platform app launch data test script
// summary: Background script that runs a test asserting launch data exists, is not a kiosk session, and contains no id or items fields.
// ---

chrome.app.runtime.onLaunched.addListener(function (launchData) {
  // Check that the isKioskSession field is |false| and no id or items fields
  // exist in the launch data.
  chrome.test.runTests([
    function testIntent() {
      chrome.test.assertFalse(!launchData, "No launchData");
      chrome.test.assertFalse(launchData.isKioskSession,
          "launchData.isKioskSession incorrect");
      chrome.test.assertTrue(!launchData.id, "launchData.id found");
      chrome.test.assertTrue(!launchData.items, "launchData.items found");
      chrome.test.succeed();
    }
  ]);
});
