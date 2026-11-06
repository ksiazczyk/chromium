// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker for version 2 NTP extension test
// summary: Service worker background script that announces installation and reports the extension version to the test.
// ---

self.currentVersion = 2;

chrome.runtime.onInstalled.addListener((details) => {
  chrome.test.sendMessage('v' + self.currentVersion + ' installed');
});

// Respond with the version of the background context.
chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  if (message === 'get-current-version') {
    sendResponse(self.currentVersion);
  }
});
