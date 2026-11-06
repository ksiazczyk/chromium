// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background for one-way message test
// summary: Service worker that listens for runtime messages and reports WORKER_RECEIVED_MESSAGE or FAILURE via chrome.test to verify one-way tab-to-worker messaging.
// ---

chrome.runtime.onMessage.addListener((msg, sender, sendResponse) => {
  chrome.test.sendMessage(
      msg === 'tab->worker' ? 'WORKER_RECEIVED_MESSAGE' : 'FAILURE');
});

chrome.test.sendMessage('WORKER_RUNNING');
