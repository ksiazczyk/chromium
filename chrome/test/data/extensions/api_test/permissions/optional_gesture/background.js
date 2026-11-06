// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Optional permissions gesture test background script
// summary: Service worker test script that asserts chrome.permissions.request fails with a gesture error when no user gesture is present.
// ---

const fail = chrome.test.callbackFail;

const GESTURE_ERROR = 'This function must be called during a user gesture';

chrome.test.getConfig(function(config) {
  chrome.test.runTests([
    function testGesture() {
      chrome.permissions.request(
          {permissions: ['bookmarks']}, fail(GESTURE_ERROR));
    },
  ]);
});
