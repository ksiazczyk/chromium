// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Context menu click test background script
// summary: Background script that creates a context menu item on launch, opens the app window, and reports context menu click events to the test harness.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.contextMenus.create({
        id: 'id1',
        title: 'Extension Item 1',
      },
      function() {
        chrome.app.window.create('main.html', {}, function() {});
      });
});

chrome.contextMenus.onClicked.addListener(function(info, tab) {
  chrome.test.assertEq(undefined, tab);
  chrome.test.sendMessage("onClicked fired for " + info.menuItemId);
});
