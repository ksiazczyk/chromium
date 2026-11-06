// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test extension background service worker
// summary: Service worker of the test extension that listens for panel and extension resource load messages and reports them to the C++ test via chrome.test.sendMessage.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  if (message === 'devtools-panel-loaded') {
    chrome.test.sendMessage('extension devtools panel loaded');
  }
  if (message === 'ext-resource-loaded') {
    chrome.test.sendMessage('extension_resource.html loaded');
  }
});
