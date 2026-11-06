// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker background for the messaging test
// summary: Service worker that listens for the tab-to-worker message, replies with the expected string, and signals that the worker is running.
// ---

chrome.runtime.onMessage.addListener((msg, sender, sendResponse) => {
  if (msg !== 'tab->worker') {
    chrome.test.sendMessage('FAILURE');
    return;
  }
  sendResponse('tab->worker->tab');
});

chrome.test.sendMessage('WORKER_RUNNING');
