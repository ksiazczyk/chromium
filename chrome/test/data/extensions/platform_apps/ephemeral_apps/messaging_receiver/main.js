// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Messaging receiver background script
// summary: Background script that opens the app window on launch and acknowledges external runtime messages and connections for ephemeral app messaging tests.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.app.window.create('index.html', {});
});

chrome.runtime.onMessageExternal.addListener(function(msg, sender, callback) {
  callback('ack_message');
});

chrome.runtime.onConnectExternal.addListener(function(port) {
  port.onMessage.addListener(function(msg) {
    port.postMessage("ack_connect_message");
  });
});
