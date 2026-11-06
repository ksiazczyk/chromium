// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: No Immediate Update Extension background script
// summary: Background script for the version 1.0 test extension that reports the offered update version via a test message and fails the test if the background page is suspended.
// ---

// Suppress the default behavior that reloads the extension and let the test
// know which update was offered.
chrome.runtime.onUpdateAvailable.addListener((details) => {
  chrome.test.sendMessage(details.version);
});

// Explicitly abort the test if Chrome decides to suspend us despite the
// persistent background page.
chrome.runtime.onSuspend.addListener(() => {
  chrome.test.fail();
});
