// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script with promise-based message listeners
// summary: Registers two onMessage listeners that return promises resolving after 1 ms and 1000 ms to exercise multi-listener response handling.
// ---

function onMessageListenerFasterPromise(message, unusedSender, sendResponse) {
  return new Promise(resolve => setTimeout(resolve, 1, 'faster promise'));
}
chrome.runtime.onMessage.addListener(onMessageListenerFasterPromise);

function onMessageListenerSlowerPromise(message, unusedSender, sendResponse) {
  return new Promise(resolve => setTimeout(resolve, 1000, 'slower promise'));
}
chrome.runtime.onMessage.addListener(onMessageListenerSlowerPromise);
