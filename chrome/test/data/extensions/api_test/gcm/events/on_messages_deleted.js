// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: on_messages_deleted event test
// summary: Listens once for the chrome.gcm.onMessagesDeleted event and succeeds when the callback fires.
// ---

onload = function() {
  chrome.test.runTests([
    function messagesDeleted() {
      chrome.test.listenOnce(chrome.gcm.onMessagesDeleted, function() {
        chrome.test.assertTrue(true);
      });
    },
  ]);
};
