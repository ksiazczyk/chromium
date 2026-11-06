// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Geolocation no-permission background test script
// summary: Runs browser tests asserting that getCurrentPosition and watchPosition fail when the extension lacks geolocation permission.
// ---

// These API calls should fail since geolocation is not enabled for this
// extension.
chrome.test.runTests([
  function geolocation_getCurrentPosition() {
    try {
      navigator.geolocation.getCurrentPosition(
          chrome.test.fail, chrome.test.succeed);
    } catch (e) {
      chrome.test.fail();
    }
  },
  function geolocation_watchPosition() {
    try {
      navigator.geolocation.watchPosition(
          chrome.test.fail, chrome.test.succeed);
    } catch (e) {
      chrome.test.fail();
    }
  },
]);
