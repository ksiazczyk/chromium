// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page action basics test background script
// summary: Background script of the test extension that listens for page action clicks and signals test pass to the browser test harness.
// ---

// Called when the user clicks on the browser action.
chrome.pageAction.onClicked.addListener(function(windowId) {
  chrome.test.notifyPass();
});

chrome.test.notifyPass();
