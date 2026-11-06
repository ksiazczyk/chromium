// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Context menus target URL patterns test extension script
// summary: Test extension script that registers a link context menu item restricted by target URL patterns and notifies the test when the item is created.
// ---

const patterns = ['http://*.google.com/*'];

chrome.runtime.onInstalled.addListener(function(details) {
  chrome.contextMenus.create(
      {
        title: 'item1',
        contexts: ['link'],
        id: 'my_id',
        targetUrlPatterns: patterns,
      },
      function() {
        if (!chrome.runtime.lastError) {
          chrome.test.sendMessage('created items');
        }
      });
});
