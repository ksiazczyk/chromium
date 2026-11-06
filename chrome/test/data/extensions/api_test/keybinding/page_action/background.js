// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page action keybinding test background script
// summary: Background script of a test extension that sends a 'clicked' test message when the page action is clicked and notifies test pass.
// ---

// Called when the user clicks on the page action.
chrome.action.onClicked.addListener(function(tab) {
  chrome.test.sendMessage('clicked');
});

chrome.test.notifyPass();
