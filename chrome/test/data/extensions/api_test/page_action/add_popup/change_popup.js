// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script changing the page action popup
// summary: Sets the page action popup to the second popup page for the active tab and notifies the test of success.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.pageAction.setPopup({
    tabId: tabs[0].id,
    popup: 'another_popup.html',
  });
  chrome.test.notifyPass();
});
