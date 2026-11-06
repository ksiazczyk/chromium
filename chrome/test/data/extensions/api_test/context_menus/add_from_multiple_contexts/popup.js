// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: First popup script creating a context menu
// summary: Creates a context menu from the first popup page, asserts no last error, and notifies test success.
// ---

chrome.contextMenus.create({title: 'menu', id: 'popup'}, function(menu) {
  chrome.test.assertNoLastError();
  chrome.test.notifyPass();
});
