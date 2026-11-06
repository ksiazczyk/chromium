// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page action popup test background script
// summary: Background script of the page action popup test extension that shows the page action icon on all tabs and sends a ready message to the test.
// ---

// Show the page action icon for all tabs.
chrome.windows.getCurrent(null, function(window) {
  chrome.tabs.query({windowId: window.id}, function(tabs) {
    for (let i = 0, t; t = tabs[i]; i++) {
      chrome.pageAction.show(t.id);
    }
    chrome.test.sendMessage('ready');
  });
});
