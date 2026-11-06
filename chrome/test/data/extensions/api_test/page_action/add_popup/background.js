// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script showing the page action and setting a popup
// summary: Extension background script that shows the page action for the active tab and sets a popup on the first click.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.pageAction.show(tabs[0].id);

  // When the page action icon is clicked for the first time, add a popup.
  chrome.pageAction.onClicked.addListener(function(tab) {
    chrome.pageAction.setPopup({
      tabId: tabs[0].id,
      popup: 'a_popup.html',
    });
    chrome.test.notifyPass();
  });

  chrome.test.notifyPass();
});
