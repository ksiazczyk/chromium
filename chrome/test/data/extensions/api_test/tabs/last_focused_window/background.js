// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Last focused window tabs API test background script
// summary: Runs a browser test that creates a focused popup window and verifies chrome.windows.getLastFocused returns that same window.
// ---

chrome.test.runTests([
  function getSelectedPopup() {
    chrome.windows.create(
        {type: 'popup', url: 'about:blank', focused: true},
        chrome.test.callbackPass(function(win) {
          chrome.windows.getLastFocused(
              chrome.test.callbackPass(function(lastFocusedWindowData) {
                chrome.test.assertTrue(lastFocusedWindowData.id === win.id);
              }));
        }));
  },
]);
