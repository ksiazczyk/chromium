// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Script that removes the browser action popup
// summary: Sets an empty popup on the active tab's browser action and notifies that the test passed.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.browserAction.setPopup({
    tabId: tabs[0].id,
    popup: '',  // No popup.
  });
  chrome.test.notifyPass();
});
