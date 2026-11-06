// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for lazy background page wait_for_view test
// summary: Test extension background script that opens extension_page.html in a new tab on install, keeping the lazy background page alive while the view is open.
// ---

chrome.runtime.onInstalled.addListener(function() {
  chrome.tabs.create({url: 'extension_page.html'}, chrome.test.callbackPass());
});
