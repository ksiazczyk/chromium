// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script setting browser action defaults and tab values
// summary: Background script that sets default and tab-specific badge text, badge color, popup, and title before the getter tests run.
// ---

chrome.browserAction.setBadgeBackgroundColor({color: [255, 0, 0, 255]});
chrome.browserAction.setBadgeText({text: 'Text'});

chrome.tabs.query({active: true}, function(tabs) {
  const tab = tabs[0];
  chrome.browserAction.setPopup({tabId: tab.id, popup: 'newPopup.html'});
  chrome.browserAction.setTitle({tabId: tab.id, title: 'newTitle'});
  chrome.browserAction.setBadgeBackgroundColor({
    tabId: tab.id,
    color: [0, 0, 0, 0],
  });
  chrome.browserAction.setBadgeText({tabId: tab.id, text: 'newText'});
  chrome.test.notifyPass();
});
