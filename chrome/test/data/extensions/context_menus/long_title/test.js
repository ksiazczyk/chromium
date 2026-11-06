// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Long title context menu test script
// summary: Service worker that creates a context menu item with a 1000-character title on install and sends a 'created' message when it succeeds.
// ---

// Make a 1000-character long title.
let longTitle = '';
for (let i = 0; i < 1000; i++) {
  longTitle += 'x';
}

chrome.runtime.onInstalled.addListener(function(details) {
  chrome.contextMenus.create({title: longTitle, id: 'my_id'}, function() {
    if (!chrome.runtime.lastError) {
      chrome.test.sendMessage('created');
    }
  });
});
