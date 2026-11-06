// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup Test extension background script
// summary: Background script that shows the page action on the active tab for the crash 44415 browser test extension.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.pageAction.show(tabs[0].id);
});
