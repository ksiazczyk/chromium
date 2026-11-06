// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Receiver extension background script for message channel leak test
// summary: Background service worker for the receiver test extension that answers external 'ping_leak' messages with a delayed sendResponse while returning false, to test that the message channel closes immediately.
// ---

chrome.runtime.onMessageExternal.addListener(
    (message, unusedSender, sendResponse) => {
      if (message === 'ping_leak') {
        // Explicitly return false. This should close the channel immediately.
        // Calling sendResponse() asynchronously should not be sent as a
        // response to the sender.
        setTimeout(() => {
          sendResponse({response: 'pong_leak'});
        }, 100);
        return false;
      }
    });
