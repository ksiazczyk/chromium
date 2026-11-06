// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Automation test extension background script
// summary: Background script for the basic chrome.automation test extension that fetches the desktop tree and signals 'got_tree' to the test runner.
// ---

chrome.tabs.query({active: true}, function(tabs) {
  chrome.automation.getDesktop(function() {
    chrome.test.sendMessage('got_tree');
  });
});
