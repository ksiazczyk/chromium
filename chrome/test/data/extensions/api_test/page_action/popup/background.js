// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page action popup test background script
// summary: Background script of the test extension that shows the page action on the active tab and notifies the test of success.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.pageAction.show(tabs[0].id);
  chrome.test.notifyPass();
});
