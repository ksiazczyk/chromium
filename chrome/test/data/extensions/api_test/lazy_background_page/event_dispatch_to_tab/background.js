// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background event page script for the event dispatch test
// summary: Extension background script that marks bookmark creation events as received and signals readiness to the test runner.
// ---

chrome.bookmarks.onCreated.addListener(function() {
  window.called = true;
  chrome.test.sendMessage('ready', function() {});
});
