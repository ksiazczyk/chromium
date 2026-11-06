// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script with promise and sendResponse onMessage listeners
// summary: Registers two onMessage listeners in the background service worker, one returning a faster promise response and one using sendResponse with return true.
// ---

function onMessageListenerFasterPromise(message, unusedSender, sendResponse) {
  return new Promise(resolve => setTimeout(resolve, 1, 'faster promise'));
}
chrome.runtime.onMessage.addListener(onMessageListenerFasterPromise);

function onMessageListenerSlowerSendResponse(
    message, unusedSender, sendResponse) {
  setTimeout(sendResponse, 1000, 'slower sendResponse');
  return true;
}
chrome.runtime.onMessage.addListener(onMessageListenerSlowerSendResponse);
