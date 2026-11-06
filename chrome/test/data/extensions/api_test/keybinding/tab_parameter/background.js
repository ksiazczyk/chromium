// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for keybinding tab parameter test
// summary: Test extension background script that listens for the toggle-feature command and asserts the tab status and URL passed to the command listener.
// ---

// Called when the user activates the command.
chrome.commands.onCommand.addListener(function(command, tab) {
  try {
    chrome.test.assertEq('toggle-feature', command);
    chrome.test.assertEq('complete', tab.status);
    chrome.test.assertEq(
        '/extensions/test_file.txt', (new URL(tab.url).pathname));
    chrome.test.notifyPass();
  } catch (e) {
    chrome.test.notifyFail(e.message);
  }
});

chrome.test.notifyPass();
