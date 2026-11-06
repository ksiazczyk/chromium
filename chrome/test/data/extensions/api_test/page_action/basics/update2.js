// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Page action icon update test script
// summary: Test script that shows the page action and sets its icon from canvas image data after the extension loads, then signals test pass.
// ---

// Test that even if we set the icon after the extension loads, it shows up.
chrome.tabs.query({active: true}, function(tabs) {
  const tab = tabs[0];
  chrome.pageAction.show(tab.id);
  chrome.pageAction.setIcon({
    tabId: tab.id,
    imageData: document.getElementById('canvas').getContext('2d').getImageData(
        0, 0, 16, 16),
  });
  chrome.test.notifyPass();
});
