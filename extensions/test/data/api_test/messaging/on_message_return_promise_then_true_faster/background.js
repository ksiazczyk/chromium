// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background service worker with competing onMessage listeners
// summary: Registers two onMessage listeners, one returning a slower promise and one responding faster via sendResponse, to test which response wins.
// ---

function onMessageListenerFasterPromise(message, unusedSender, sendResponse) {
  return new Promise(resolve => setTimeout(resolve, 1000, 'slower promise'));
}
chrome.runtime.onMessage.addListener(onMessageListenerFasterPromise);

function onMessageListenerSlowerSendResponse(
    message, unusedSender, sendResponse) {
  setTimeout(sendResponse, 1, 'faster sendResponse');
  return true;
}
chrome.runtime.onMessage.addListener(onMessageListenerSlowerSendResponse);
