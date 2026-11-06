// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Lazy background page webNavigation event test background script
// summary: Background script of a test extension that listens for webNavigation.onBeforeNavigate and reports success via chrome.test.succeed.
// ---

console.info('running extension!');
chrome.webNavigation.onBeforeNavigate.addListener(function(details) {
  console.info('Got the event!');
  chrome.test.succeed();
});
