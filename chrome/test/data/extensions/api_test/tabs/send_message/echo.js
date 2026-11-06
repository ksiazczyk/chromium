// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Echo content script replying pong to ping messages
// summary: Content script that listens for runtime messages and responds with pong, verifying the sender origin for the chrome.tabs.sendMessage test.
// ---

// A simple onMessage listener that responds to "ping" messages with a "pong"
// message.
chrome.runtime.onMessage.addListener((request, sender, sendResponse) => {
  const extensionOrigin = new URL(chrome.runtime.getURL('')).origin;
  let response = 'pong';
  if (request !== 'ping' || sender.origin !== extensionOrigin) {
    response = `Unexpected message "${request}" from origin "${sender.origin}"`;
  }
  sendResponse({message: response, senderUrl: sender.url});
});
