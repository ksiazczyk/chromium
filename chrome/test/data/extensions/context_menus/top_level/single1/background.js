// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Background script for top level context menus extension test #1'
// summary: Test extension background script that creates a single top-level context menu item and signals the test when the item is created.
// ---

const contextMenuTitle = 'Context Menu #3 - Extension #1';

chrome.runtime.onInstalled.addListener(function(details) {
  chrome.contextMenus.create(
      {title: contextMenuTitle, id: 'single1_1'}, function() {
        if (!chrome.runtime.lastError) {
          chrome.test.sendMessage('created item');
        }
      });
});
