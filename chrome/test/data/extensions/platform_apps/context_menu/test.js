// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Context menu test background script
// summary: On app launch, creates two context menu items and then opens the main.html window.
// ---

chrome.app.runtime.onLaunched.addListener(function() {
  chrome.contextMenus.create({title: 'Extension Item 1', contexts: ['all'],
                             id: 'id1'}, function() {
    chrome.contextMenus.create({title: 'Extension Item 2', contexts: ['all'],
                               id: 'id2'}, function() {
      chrome.app.window.create('main.html', {}, function() {});
    });
  });
});
