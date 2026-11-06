// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Receiver test extension background script
// summary: Background service worker of the receiver test extension that listens for external messages and asynchronously responds to 'ping_async' with 'pong_async' after a short delay.
// ---

chrome.runtime.onMessageExternal.addListener(
    (message, unusedSender, sendResponse) => {
      if (message === 'ping_async') {
        setTimeout(() => {
          sendResponse({response: 'pong_async'});
        }, 10);
        return true;
      }
    });
