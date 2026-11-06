// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for bookmark shortcut overwrite test
// summary: Background script of the test extension that listens for command activation and reports the command name via a test message.
// ---

// Called when the user activates the command.
chrome.commands.onCommand.addListener(function(command) {
  chrome.test.sendMessage(command);
});

chrome.test.notifyPass();
