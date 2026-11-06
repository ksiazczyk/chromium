// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Launch data checks for invalid launch test app
// summary: Background script that verifies launch data on app launch, asserting isKioskSession is false and no id or items fields are present.
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
