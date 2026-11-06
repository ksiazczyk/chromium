// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Service worker creating a context menu for locked fullscreen tests
// summary: Service worker that creates an enabled context menu item on install and signals the browser test that the menu was created.
// ---

const makeBrowserTestProceed = function() {
  if (!chrome.runtime.lastError) {
    chrome.test.sendMessage('created context menu');
  }
};

chrome.runtime.onInstalled.addListener(function() {
  chrome.contextMenus.create(
      {title: 'Extension Item 1', id: 'my_id', enabled: true},
      makeBrowserTestProceed);
});
