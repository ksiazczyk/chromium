// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Separator test creating items under an explicit parent
// summary: Removes context menu items from the previous test and recreates the test set beneath an explicit parent item.
// ---

// Clear out items from previous test.
chrome.contextMenus.removeAll();

// Create a bunch of items underneath an explicit parent.
const parent = chrome.contextMenus.create({'title': 'parent'}, function() {
  createTestSet(parent, function() {
    chrome.test.sendMessage('test2 create finished');
  });
});
