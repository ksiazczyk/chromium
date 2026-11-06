// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for keybinding update test extension
// summary: Background script of the test extension that injects a script turning the page red when the action is clicked and then signals the test passed.
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
