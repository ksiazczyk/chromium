// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Browser action test background script
// summary: Background script for a lazy background page browser action test that opens or focuses the extensions page when the browser action is clicked.
// ---

chrome.browserAction.onClicked.addListener(function(tab) {
  // Look for an existing tab for the extensions page before opening a new one.
  chrome.windows.getCurrent(null, function(window) {
    chrome.tabs.query({windowId: window.id}, function(tabs) {
      const chromeExtUrl = 'chrome://extensions/';
      for (let i = 0; i < tabs.length; i++) {
        if (tabs[i].url === chromeExtUrl) {
          chrome.tabs.update(tabs[i].id, {selected: true});
          return;
        }
      }
      chrome.tabs.create({url: chromeExtUrl, selected: true});
    });
  });
});
