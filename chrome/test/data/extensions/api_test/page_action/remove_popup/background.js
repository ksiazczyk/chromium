// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script showing the page action
// summary: Background script that shows the page action on the active tab and signals the test passed via chrome.test.notifyPass.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.pageAction.show(tabs[0].id);
  chrome.test.notifyPass();
});
