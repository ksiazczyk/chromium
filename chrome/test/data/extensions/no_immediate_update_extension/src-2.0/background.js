// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: No Immediate Update Extension background script
// summary: Background script of a test extension that suppresses automatic reload on available updates and fails the test if Chrome suspends the background page.
// ---

// Suppress the default behavior that reloads the extension on available update.
chrome.runtime.onUpdateAvailable.addListener(() => {});

// Explicitly abort the test if Chrome decides to suspend us despite the
// persistent background page.
chrome.runtime.onSuspend.addListener(() => {
  chrome.test.fail();
});
