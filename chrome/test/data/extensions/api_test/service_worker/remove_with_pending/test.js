// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test script for the remove_with_pending test
// summary: Sends a ready message to the browser test and, on receiving go, pings the service worker via chrome.runtime.sendMessage.
// ---

chrome.test.sendMessage('ready', (message) => {
  if (message === 'go') {
    chrome.runtime.sendMessage('ping');
    return;
  }
  console.error(`Unknown message ${message}`);
});
