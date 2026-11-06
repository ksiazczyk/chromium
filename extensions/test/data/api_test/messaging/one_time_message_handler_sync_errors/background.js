// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker with synchronously throwing message listeners
// summary: Service worker for the test extension that registers two runtime.onMessage listeners which each throw a synchronous error.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  throw new Error('sync error #1');
});

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  throw new Error('sync error #2');
});
