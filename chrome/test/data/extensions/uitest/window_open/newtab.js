// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: New tab extension API test script
// summary: Queries the current window and its tabs via chrome.windows and chrome.tabs, resolving whether the extension API calls succeed.
// ---

function testExtensionApi() {
  try {
    return new Promise(resolve => {
      chrome.windows.getCurrent(null, window => {
        chrome.tabs.query({windowId: window.id}, function() {
          resolve(!chrome.runtime.lastError);
        });
      });
    });
  } catch (e) {
    return false;
  }
}
