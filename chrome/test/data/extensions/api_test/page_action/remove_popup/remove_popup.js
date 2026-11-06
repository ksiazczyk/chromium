// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script removing the page action popup
// summary: Script that clears the page action popup by calling chrome.pageAction.setPopup with an empty popup and signals the test passed.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.pageAction.setPopup({
    tabId: tabs[0].id,
    popup: '',  // No popup.
  });
  chrome.test.notifyPass();
});
