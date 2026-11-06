// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background onMessage async function listeners
// summary: Registers two async function listeners for runtime.onMessage, one returning a fast-resolving promise and one a never-resolving promise, to test which response is used.
// ---

async function fasterAsyncFunctionResponse() {
  chrome.test.sendMessage('faster async function called');
  return 'faster async function (promise) response';
}
chrome.runtime.onMessage.addListener(fasterAsyncFunctionResponse);

async function slowerAsyncFunctionResponse() {
  chrome.test.sendMessage('slower async function called');
  // Return a never-resolving promise to ensure that the other async function's
  // promise always resolves first.
  return new Promise(() => {});
}
chrome.runtime.onMessage.addListener(slowerAsyncFunctionResponse);
