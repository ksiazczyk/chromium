// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: 'Background script for top-level context menus test extension #2'
// summary: Test extension background script that creates a single top-level context menu item and sends a 'created item' test message once it exists.
// ---

const contextMenuTitle = 'Context Menu #1 - Extension #2';

chrome.runtime.onInstalled.addListener(function(details) {
  chrome.contextMenus.create(
      {title: contextMenuTitle, id: 'single2_1'}, function() {
        if (!chrome.runtime.lastError) {
          chrome.test.sendMessage('created item');
        }
      });
});
