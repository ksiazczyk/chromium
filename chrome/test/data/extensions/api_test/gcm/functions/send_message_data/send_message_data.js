// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GCM send message test script
// summary: Browser test script that defines a sample GCM message and verifies chrome.gcm.send succeeds via a chrome.test run.
// ---

const MESSAGE = {
  messageId: 'message-id',
  destinationId: 'destination-id',
  timeToLive: 100,
  data: {
    key1: 'value1',
    key2: 'value2',
  },
};

chrome.test.runTests([
  function testSend() {
    chrome.gcm.send(MESSAGE, function(messageId) {
      chrome.test.succeed();
    });
  },
]);
