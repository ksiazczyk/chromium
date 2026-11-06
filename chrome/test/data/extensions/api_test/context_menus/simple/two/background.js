// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Context menu test extension background script
// summary: Background script for the second simple context menu test extension, creating context menus with automatic IDs and resolving whether a create error occurred.
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
