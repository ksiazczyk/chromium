// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Message echoer test extension background script
// summary: Background script of a test extension that echoes back any message received from external senders, including the sender details.
// ---

chrome.runtime.onMessageExternal.addListener(function(
    message, sender, sendResponse) {
  sendResponse({receivedMessage: message, receivedSender: sender});
});
