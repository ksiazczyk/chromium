// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Storage onChanged listener content script
// summary: Content script that listens for storage.onChanged events and messages the extension about which storage area fired them.
// ---

chrome.storage.onChanged.addListener(function(changes, namespace) {
  if (namespace === 'session' && changes.notify?.newValue === 'yes') {
    chrome.runtime.sendMessage('storage.session.onChanged received');
  } else if (namespace === 'local' && changes.notify?.newValue === 'yes') {
    chrome.runtime.sendMessage('storage.local.onChanged received');
  } else if (namespace === 'sync' && changes.notify?.newValue === 'yes') {
    chrome.runtime.sendMessage('storage.sync.onChanged received');
  } else {
    chrome.runtime.sendMessage(
        `script received an unexpected event: ${JSON.stringify(changes)}`);
  }
});
