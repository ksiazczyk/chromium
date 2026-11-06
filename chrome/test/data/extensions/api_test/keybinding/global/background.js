// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Global shortcut test background script
// summary: Background script for the global keybinding test extension that notifies pass when the valid global shortcut fires and fails on any other command.
// ---

// Called when the user activates the command.
chrome.commands.onCommand.addListener(function(command) {
  if (command === 'Ctrl-Shift-8-Valid-Global-Shortcut') {
    chrome.test.notifyPass();
    return;
  }

  // Everything else is a failure case.
  chrome.test.notifyFail(`Unexpected command received: ${command}`);
});

chrome.test.notifyPass();
