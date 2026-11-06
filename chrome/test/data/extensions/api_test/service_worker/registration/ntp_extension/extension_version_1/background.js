// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker script for NTP extension test version 1
// summary: Service worker background script that announces version 1 on install and replies to get-current-version messages during the extension API test.
// ---

self.currentVersion = 1;

chrome.runtime.onInstalled.addListener((details) => {
  chrome.test.sendMessage('v' + self.currentVersion + ' installed');
});

// Respond with the version of the background context.
chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  if (message === 'get-current-version') {
    sendResponse(self.currentVersion);
  }
});
