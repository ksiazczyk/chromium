// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lazy background page browser action create tab test script
// summary: Background script fixture for the browser action create tab API test that opens the browser's extensions page in a new tab when the browser action is clicked.
// ---

chrome.browserAction.onClicked.addListener(function(tab) {
  chrome.tabs.create({url: 'chrome://extensions/', selected: true});
});
