// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background listener that throws before a second listener responds
// summary: Service worker for the test extension that registers two runtime.onMessage listeners, the first of which throws a synchronous error while the second sends a response.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  throw new Error('sync error');
});

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  sendResponse('response from listener');
});
