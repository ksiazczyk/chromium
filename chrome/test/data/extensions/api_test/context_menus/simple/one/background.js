// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Context menus test extension background script
// summary: Background service worker script that creates context menu items with automatic IDs for the simple one extension API test.
// ---

let nextId = 1;
function create(createProperties) {
  if (createProperties.id === undefined) {
    createProperties.id = `auto_id_${nextId++}`;
  }

  return new Promise(resolve => {
    chrome.contextMenus.create(createProperties, function() {
      const error = !!chrome.runtime.lastError;
      resolve(error);
    });
  });
}
