// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Receiver extension background script for external message promise test
// summary: Service worker for the receiver test extension that listens for external messages and resolves a 'pong' promise in reply to a 'ping'.
// ---

chrome.runtime.onMessageExternal.addListener((message, sender) => {
  if (message === 'ping') {
    return Promise.resolve({response: 'pong'});
  }
});
