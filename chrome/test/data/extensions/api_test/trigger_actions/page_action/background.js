// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page action test extension background script
// summary: Background script for the page action API test extension that shows the page action on all tabs and turns the tab background red when the page action is clicked.
// ---

// Show the page action icon for all tabs.
chrome.tabs.onCreated.addListener(function(tab) {
  chrome.windows.getCurrent(null, function(window) {
    chrome.tabs.query({windowId: window.id}, function(tabs) {
      for (let i = 0, t; t = tabs[i]; i++) {
        chrome.pageAction.show(t.id);
      }
    });
  });
});

// Turn the background red when the user clicks on the page action.
chrome.pageAction.onClicked.addListener(function(tab) {
  chrome.tabs.executeScript(
      null, {code: 'document.body.style.backgroundColor=\'red\''});
  chrome.test.notifyPass();
});

chrome.test.notifyPass();
