// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script with async and erroring message listeners
// summary: Registers two runtime.onMessage listeners in the test extension's service worker, one replying asynchronously and one throwing a synchronous error.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  setTimeout(sendResponse, 1, 'response from listener');
  return true;
});

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  throw new Error('sync error');
});
