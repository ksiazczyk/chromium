// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script creating two top-level context menus
// summary: Test extension background script that creates two context menu items on install and signals completion via chrome.test.sendMessage.
// ---

chrome.runtime.onInstalled.addListener(function(details) {
  chrome.contextMenus.create(
      {title: 'Context Menu #1', id: 'multi5_1'}, function() {
        if (!chrome.runtime.lastError) {
          chrome.contextMenus.create(
              {title: 'Context Menu #2', id: 'multi5_2'}, function() {
                if (!chrome.runtime.lastError) {
                  chrome.test.sendMessage('created items');
                }
              });
        }
      });
});
