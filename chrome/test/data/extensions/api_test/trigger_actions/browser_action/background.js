// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for browser action trigger test
// summary: Test extension background script that turns the active tab's background red when the browser action is clicked and signals test pass to the Chrome test framework.
// ---

// Turn the background red when the user clicks on the browser action.
chrome.browserAction.onClicked.addListener(function(tab) {
  chrome.tabs.executeScript(
      null, {code: 'document.body.style.backgroundColor=\'red\''});
  chrome.test.notifyPass();
});

chrome.test.notifyPass();
