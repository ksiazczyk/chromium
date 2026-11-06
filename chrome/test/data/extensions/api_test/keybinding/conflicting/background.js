// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Conflicting keybinding test background script
// summary: Background script of the conflicting keybinding test extension that sends test messages when the browser action is clicked or a command is activated.
// ---

// Called when the user clicks on the browser action.
chrome.action.onClicked.addListener(function(windowId) {
  chrome.test.sendMessage('conflicting browser action');
});

// Called when the user activates the command.
chrome.commands.onCommand.addListener(function(command) {
  chrome.test.sendMessage('conflicting command');
});

chrome.test.notifyPass();
