// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for worker-to-tab messaging test
// summary: Content script that listens for the 'worker->tab' message and replies 'worker->tab->worker' to verify messaging from the extension service worker to a tab.
// ---

chrome.runtime.onMessage.addListener((request, sender, sendResponse) => {
  if (request !== 'worker->tab') {
    chrome.test.sendMessage('FAILURE');
    return;
  }
  sendResponse('worker->tab->worker');
});
