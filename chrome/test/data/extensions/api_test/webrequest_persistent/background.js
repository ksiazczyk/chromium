// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Web request persistence test background script
// summary: Background page script for the webRequest persistence extension API test that counts observed requests in chrome.storage.local and signals progress to the test harness.
// ---

let storageComplete = undefined;
let isUsingStorage = false;

// Waits for any pending load to complete to avoid raciness in the test.
async function flushStorage() {
  console.assert(!storageComplete);
  if (!isUsingStorage) {
    return;
  }
  await new Promise((resolve) => {
    storageComplete = resolve;
  });
  storageComplete = undefined;
}

// Increments a counter storing the number of seen events, and notifies the test
// once the new count is stored.
function beforeRequestListener() {
  isUsingStorage = true;
  chrome.storage.local.get({requestCount: 0}, (result) => {
    let currentCount = result.requestCount;
    chrome.test.assertTrue(typeof currentCount === 'number');
    chrome.test.assertTrue(currentCount >= 0);
    ++currentCount;
    chrome.storage.local.set({requestCount: currentCount}, () => {
      isUsingStorage = false;
      if (storageComplete) {
        storageComplete();
      }
      chrome.test.sendMessage('event received');
    });
  });
}

chrome.webRequest.onBeforeRequest.addListener(
    beforeRequestListener,
    {urls: ['*://example.com/*'], types: ['main_frame']});

chrome.test.sendMessage('ready');
