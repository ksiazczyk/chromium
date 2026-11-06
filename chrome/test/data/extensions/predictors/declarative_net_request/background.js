// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the reactive prefetch test extension
// summary: Service worker that records requests blocked by declarativeNetRequest rules and signals the test when a given URL has been blocked.
// ---

const requestsBlocked = new Set();

async function waitUntilRequestBlocked(url) {
  if (requestsBlocked.has(url)) {
    chrome.test.sendScriptResult(true);
    return;
  }
  await new Promise(resolve => {
    chrome.declarativeNetRequest.onRuleMatchedDebug.addListener(info => {
      if (info.request.url === url) {
        resolve();
      }
    });
  });
  chrome.test.sendScriptResult(true);
}

chrome.declarativeNetRequest.onRuleMatchedDebug.addListener(info => {
  requestsBlocked.add(info.request.url);
});
