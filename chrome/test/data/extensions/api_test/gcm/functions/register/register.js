// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GCM register API browser test
// summary: Background test script that calls chrome.gcm.register with sender IDs and succeeds when the registration callback runs.
// ---

chrome.test.runTests([
  function testRegister() {
    const senderIds = ['Sender1', 'Sender2'];
    chrome.gcm.register(senderIds, function(registrationId) {
      chrome.test.succeed();
    });
  },
]);
