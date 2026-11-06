// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker with promise-resolving and throwing message listeners
// summary: Registers two runtime.onMessage listeners, one returning a resolved promise and one throwing a synchronous error, as the fixture for the messaging API test.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  return new Promise((resolve) => {
    resolve('promise resolved');
  });
});

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  throw new Error('sync error');
});
