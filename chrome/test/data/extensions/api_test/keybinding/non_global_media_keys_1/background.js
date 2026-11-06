// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Background script for the non-global media keys test extension
// summary: Listens for extension commands and passes the browser test when the MediaStop-non-global command fires, failing on any other command.
// ---

// Called when the user activates the command.
chrome.commands.onCommand.addListener(function(command) {
  if (command === 'MediaStop-non-global') {
    chrome.test.notifyPass();
    return;
  }

  // Everything else is a failure case.
  chrome.test.notifyFail(`Unexpected command received: ${command}`);
});

chrome.test.notifyPass();
