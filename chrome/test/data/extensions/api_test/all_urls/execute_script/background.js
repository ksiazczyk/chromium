// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the all_urls executeScript API test
// summary: Background page script that injects a code snippet into updated tabs via chrome.tabs.executeScript and reports the URLs where it ran using test messages.
// ---

// Let the background page know this content script executed.
const inject = `chrome.runtime.sendMessage({greeting: 'hello'});`;
chrome.tabs.onUpdated.addListener(function(tabId, changeInfo, tab) {
  chrome.tabs.executeScript(tabId, {code: inject});
});

chrome.runtime.onMessage.addListener(function(request, sender, sendResponse) {
  // Let the extension know where the script ran.
  const url = sender.tab ? sender.tab.url : 'about:blank';
  chrome.test.sendMessage(`execute: ${url}`);
});

chrome.test.sendMessage('execute: ready');
