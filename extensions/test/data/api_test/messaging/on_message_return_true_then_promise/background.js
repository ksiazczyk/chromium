// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for onMessage sendResponse vs promise test
// summary: Registers two onMessage listeners in the test extension, one replying faster via sendResponse with return true and one resolving a slower promise, to compare response behavior.
// ---

function onMessageListenerFasterSendResponse(
    message, unusedSender, sendResponse) {
  setTimeout(sendResponse, 1, 'faster sendResponse');
  return true;
}
chrome.runtime.onMessage.addListener(onMessageListenerFasterSendResponse);

function onMessageListenerSlowerPromise(message, unusedSender, sendResponse) {
  return new Promise(resolve => setTimeout(resolve, 1000, 'slower promise'));
}
chrome.runtime.onMessage.addListener(onMessageListenerSlowerPromise);
