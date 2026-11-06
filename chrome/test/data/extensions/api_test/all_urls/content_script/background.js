// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script reporting content script execution
// summary: Test extension background script that listens for messages and reports the URL of the tab where the content script ran via chrome.test.sendMessage.
// ---

chrome.runtime.onMessage.addListener(function(request, sender, sendResponse) {
  // Let the extension know where the script ran.
  const url = sender.tab ? sender.tab.url : 'about:blank';
  chrome.test.sendMessage(`content script: ${url}`);
});
