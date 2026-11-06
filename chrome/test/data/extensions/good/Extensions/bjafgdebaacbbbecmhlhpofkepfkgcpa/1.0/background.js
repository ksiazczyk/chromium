// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background script for external connections
// summary: Background script that listens for external connections and replies with success and the sender's extension ID.
// ---

chrome.runtime.onConnectExternal.addListener(function(port) {
  port.onMessage.addListener(function(msg) {
    if (msg.testConnectExternal) {
      port.postMessage({success: true, senderId: port.sender.id});
    }
  });
});
