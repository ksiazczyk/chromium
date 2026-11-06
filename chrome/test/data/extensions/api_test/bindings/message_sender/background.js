// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Message sender test background script
// summary: Background script of the message sender test extension that signals readiness via chrome.test and then sends a runtime message to the extension ID it receives.
// ---

chrome.test.sendMessage('sender_ready', function(id) {
  chrome.runtime.sendMessage(id, 'from_sender');
});
