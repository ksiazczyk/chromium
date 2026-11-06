// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background listeners responding first and throwing for messaging test
// summary: Registers two runtime.onMessage listeners in the test extension's service worker, one that responds synchronously and one that throws, to exercise one-time message handler behavior.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  sendResponse('response from listener');
});

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  throw new Error('sync error');
});
