// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the pagehide messaging test
// summary: Background page script that listens for runtime messages and tracks the message count and last received message.
// ---

window.messageCount = 0;

chrome.runtime.onMessage.addListener(function(request, sender, sendResponse) {
  ++window.messageCount;
  window.message = request;
});
