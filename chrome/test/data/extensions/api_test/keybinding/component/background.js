// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Keybinding component test background script
// summary: Background script for the component keybinding extension API test that checks the single registered command has the expected platform-specific Ctrl+Shift+5 shortcut and reports pass.
// ---

const platformBinding = /Mac/.test(navigator.platform) ? '⇧⌘5' : 'Ctrl+Shift+5';
chrome.commands.getAll(function(commands) {
  chrome.test.assertEq(1, commands.length);
  chrome.test.assertEq(platformBinding, commands[0].shortcut);
  chrome.test.notifyPass();
});
