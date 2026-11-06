// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the multi4 context menu test extension
// summary: Background service worker for the multi4 test extension that creates two top-level context menus and sends a test message once both are created.
// ---

chrome.runtime.onInstalled.addListener(function(details) {
  chrome.contextMenus.create(
      {title: 'Context Menu #1', id: 'multi4_1'}, function() {
        if (!chrome.runtime.lastError) {
          chrome.contextMenus.create(
              {title: 'Context Menu #2', id: 'multi4_2'}, function() {
                if (!chrome.runtime.lastError) {
                  chrome.test.sendMessage('created items');
                }
              });
        }
      });
});
