// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content script for tab-to-worker message test
// summary: Content script that sends a runtime message from a tab to the extension service worker and reports success when the expected reply arrives.
// ---

chrome.runtime.sendMessage('tab->worker', response => {
  if (response !== 'tab->worker->tab') {
    chrome.test.sendMessage('FAILURE');
    return;
  }
  chrome.test.sendMessage('CONTENT_SCRIPT_RECEIVED_REPLY');
});
