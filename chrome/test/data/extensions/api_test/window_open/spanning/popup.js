// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Popup script verifying tab creation from window.open
// summary: Listens for tab creation, reports the new tab to the background page for verification, opens the target page, and closes the popup.
// ---

chrome.tabs.onCreated.addListener(function onCreated(tab) {
  chrome.tabs.onCreated.removeListener(onCreated);
  chrome.extension.getBackgroundPage().verifyCreatedTab(tab);
});
window.open('foo.html');
window.close();
