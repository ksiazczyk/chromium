// Copyright 2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Install event test background script
// summary: Background script that signals readiness and sends a test message when the management onInstalled event fires for the enabled extension.
// ---

chrome.management.onInstalled.addListener(function(info) {
  if (info.name === 'enabled_extension') {
    chrome.test.sendMessage('got_event');
  }
});

chrome.test.sendMessage('ready');
