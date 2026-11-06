// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker with rejecting promise and throwing listeners
// summary: Test fixture service worker registering two onMessage listeners, one returning a rejected promise and one throwing a synchronous error.
// ---

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  return new Promise((resolve, reject) => {
    reject('promise rejected');
  });
});

chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
  throw new Error('sync error');
});
