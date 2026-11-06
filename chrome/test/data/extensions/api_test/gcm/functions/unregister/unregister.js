// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GCM unregister API browser tests
// summary: Runs chrome.test cases that register sender IDs, call chrome.gcm.unregister, and verify success plus server error handling.
// ---

chrome.test.runTests([
  function testUnregister() {
    const senderIds = ['Sender1', 'Sender2'];
    chrome.gcm.register(senderIds, function(registrationId) {
      if (chrome.runtime.lastError) {
        chrome.test.fail();
      }
      chrome.gcm.unregister(function() {
        if (chrome.runtime.lastError) {
          chrome.test.fail();
        } else {
          chrome.test.succeed();
        }
      });
    });
  },
  function testUnregisterWithServerError() {
    chrome.gcm.unregister(function() {
      if (chrome.runtime.lastError !== undefined &&
          chrome.runtime.lastError.message === 'Server error occurred.') {
        chrome.test.succeed();
      } else {
        chrome.test.fail();
      }
    });
  },
]);
