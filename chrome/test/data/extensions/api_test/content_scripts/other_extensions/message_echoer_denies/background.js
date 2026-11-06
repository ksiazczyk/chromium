// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script of the message echoer denies test extension
// summary: Background script for a test extension that listens for external messages and echoes the message and sender back in the response.
// ---

chrome.runtime.onMessageExternal.addListener(function(
    message, sender, sendResponse) {
  sendResponse({receivedMessage: message, receivedSender: sender});
});
