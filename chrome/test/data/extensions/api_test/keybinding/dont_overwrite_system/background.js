// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the keybinding test extension
// summary: Test extension background script that listens for command activation and sends the command name as a test message before notifying pass.
// ---

// Called when the user activates the command.
chrome.commands.onCommand.addListener(function(command) {
  chrome.test.sendMessage(command);
});

chrome.test.notifyPass();
