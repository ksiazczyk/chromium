// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Keybinding update test extension background script
// summary: Background script for the v2 reassigned keybinding test extension that injects a script turning the page red when the action is clicked and notifies the test pass.
// ---

// Called when the user clicks on the browser action.
chrome.action.onClicked.addListener(function(tab) {
  chrome.scripting.executeScript({
    target: {tabId: tab.id},
    func: () => {
      document.body.bgColor = 'red';
    },
  });
});

chrome.test.notifyPass();
