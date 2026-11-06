// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for top-level context menus test extension 3
// summary: Test extension background script that creates a single top-level context menu item on install and signals 'created item' to the test harness.
// ---

const contextMenuTitle = 'Context Menu #2 - Extension #3';

chrome.runtime.onInstalled.addListener(function(details) {
  chrome.contextMenus.create(
      {title: contextMenuTitle, id: 'single3_1'}, function() {
        if (!chrome.runtime.lastError) {
          chrome.test.sendMessage('created item');
        }
      });
});
