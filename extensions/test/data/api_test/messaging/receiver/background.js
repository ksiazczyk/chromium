// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Receiver test extension background script
// summary: Background script of a test extension that listens for external connections and answers test messages with success and the sender's extension ID.
// ---

chrome.runtime.onConnectExternal.addListener((port) => {
  port.onMessage.addListener((msg) => {
    if (msg.testConnectExternal)
      port.postMessage({success: true, senderId: port.sender.id});
  });
});
