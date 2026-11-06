// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Broadcast event test extension background script
// summary: Background script of the lazy background page broadcast_event test extension that shows or hides a page action when a tab navigates to test_file.html.
// ---

chrome.tabs.onUpdated.addListener(function(tabId, changeInfo, tab) {
  if (tab.url.search('test_file.html') > -1) {
    chrome.pageAction.show(tabId);
  } else {
    chrome.pageAction.hide(tabId);
  }
});
