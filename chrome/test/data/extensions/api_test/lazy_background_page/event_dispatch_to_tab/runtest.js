// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test runner for event dispatch to a tab and event page
// summary: Listens for bookmark creation events and asserts that both the tab page and the unloaded background event page received them.
// ---

let called = false;
function testReceivedEvent() {
  chrome.test.assertTrue(called);

  chrome.runtime.getBackgroundPage(function(background_page) {
    chrome.test.assertTrue(background_page.called);
    chrome.test.succeed();
  });
}

chrome.bookmarks.onCreated.addListener(function() {
  called = true;
});

chrome.test.sendMessage('ready', function(message) {
  chrome.test.runTests([testReceivedEvent]);
});
